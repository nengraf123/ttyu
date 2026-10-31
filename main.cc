#include <string>
#include <iostream>
#include "MySystem.h"

#define END "\033[0m"

int main () {
  int terminalWidth  = Nsystem("tput cols");
  int terminalHeight = Nsystem("tput lines");

  std::string sum(terminalWidth * terminalHeight, ' ');
  std::cout << "\033[46m" << sum << END << std::flush;
  // while (true) {}
}
