#include <iostream>

int main() {
  int BASE = 4;
  double fromage = 800.;
  double eau = 2.;
  double ail = 2.;
  double pain = 400.;
  std::cout << "Convives:";
  char nbConvives;
  std::cin >> nbConvives;
  std::cout << (int)nbConvives;
  fromage = fromage * ((double)nbConvives / BASE);
  eau = eau * ((double)nbConvives / BASE);
  ail = ail * ((double)nbConvives / BASE);
  pain = pain * ((double)nbConvives / BASE);
  std::cout << "BITES:" << std::endl;
  std::cout << "fromage:" << fromage << std::endl;
  std::cout << "eau:" << eau << std::endl;
  std::cout << "ail:" << ail << std::endl;
  std::cout << "pain:" << pain << std::endl;
  return 0;
}
