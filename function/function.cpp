#include <iostream>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
  return a + b;
}

int main() {
  int num1 = 5;
  int num2 = 10;

  int result = sum(num1, num2); // Calling the sum function

  std::cout << "Sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

  return 0;
}
