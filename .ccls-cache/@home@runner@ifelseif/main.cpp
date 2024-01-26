#include <iostream>

int main() {
  int a=0;
  if (a > 0) {
      std::cout << "a is positive" << std::endl;
  } else if (a < 0) {
      std::cout << "a is negative" << std::endl;
  } else {
      std::cout << "a is zero" << std::endl;
  }
}