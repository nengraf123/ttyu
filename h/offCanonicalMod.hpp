#include <termios.h>
#include <unistd.h>
#include <cstdio>

void offCannonicalMod() {
    termios t;
    tcgetattr(STDIN_FILENO, &t);
    // t.c_lflag &= ~(ICANON | ECHO); // выкл. буферизацию по Enter и отображение
    t.c_lflag &= ~(ICANON | ECHO | ISIG); // + ISIG — Ctrl+C больше не убивает процесс
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

