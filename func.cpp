#include "functions.h"

int Sum(int a, int b) {
  return a + b;
}

int main() {
  int result = Sum(5, 3);
  std::cout << result << std::endl; // Вывод 8
  return 0;
}