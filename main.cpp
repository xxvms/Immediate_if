#include <iostream>
#include <string>

int main() {
  int x = 99;
  while (x > 0) {
    std::cout << "Enter a number, 0 or negative to quit" << '\n';
    std::cin >> x;
    std::string sign = x > 0 ? "positive" : "0 or negative";
    std::cout << "your number is " << sign << '\n';
  }

  return 0;
}