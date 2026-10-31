#include <iostream>
void voprositelnoe_okno(int shirina_terminala, int visota_terminala) {
  int a = shirina_terminala /2;
  int b = visota_terminala/2;
  a = a - 10;
  b = b - 2;
  std::cout << "\033["<< b << ";" << a << "H" << std::flush;
  std::cout << "\033[48;2;255;0;0;38;2;255;255;255m◢◤◢◤◢◤◢◤◢◤◢◤◢◤◢◤◢◤◢◤"<< std::flush;
  std::cout << "\033[1B\033[20D◤◢" << std::flush;
  std::cout << "\033[16C◤◢" << std::flush;
  std::cout << "\033[1B\033[20D◢◤" << std::flush;
  std::cout << "\033[16C◢◤" << std::flush;
  std::cout << "\033[1B\033[20D◤◢" << std::flush;
  std::cout << "\033[16C◤◢" << std::flush;
  std::cout << "\033[1B\033[20D" << std::flush;
  std::cout << "\033[48;2;255;0;0;38;2;255;255;255m◢◤◢◤◢◤◢◤◢◤◢◤◢◤◢◤◢◤◢◤"<< std::flush;
  std::cout << "\033[0m" << std::flush;
  std::cout << "\033[2A\033[16DВы уверенны?" << std::flush;
}


