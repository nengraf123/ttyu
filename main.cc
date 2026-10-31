#include <ostream>
#include <string>
#include <iostream>
#include <unistd.h>

#include "h/MySystem.hpp"
#include "h/offCanonicalMod.hpp"
#include "h/voprositelnoe_okno.hpp"

#define END "\033[0m"


void Init() {
  offCannonicalMod(); // убираем возможность печатать и тд, и даем возможность это обрабатывать
  std::cout << "\033[?25l" << std::flush; // убираем видимость курсора
}

void Close() {
  std::cout << "\033[?25h" << std::flush; // вернуть курсор перед выходом
}

int terminalWidth  = Nsystem("tput cols");
int terminalHeight = Nsystem("tput lines");
std::string sum(terminalWidth * terminalHeight, ' ');

int main () {
  Init();


  while (true) {
  // ставим курсор в начало экрана
    std::cout << "\033[H" << std::flush;
  // очищяем терминал
    std::cout << "\033[48;5;136m" << sum << END << std::flush;
  // блокирует поток, ждёт нажатия printf("Нажата клавиша: %c (code %d)\n", key, key);
    char key = getchar();
  // выход на q
    if (key == 113) break;
  //
    std::cout << std::flush;
  }


  Close();
}

