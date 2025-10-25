#include "calc.h"
#include <stdio.h>

double add(double num1, double num2) {
  double result = num1 + num2;
  printf("%lf\n", result);
  return result;
}

double sub(double num1, double num2) {
  double result = num1 - num2;
  printf("%lf\n", result);
  return result;
}

double mul(double num1, double num2) {
  double result = num1 * num2;
  printf("%lf\n", result);
  return result;
}

double divi(double num1, double num2) {
  if (num2 != 0) {
    double result = num1 / num2;
    printf("%lf\n", result);
    return result;
  } else {
    printf("Error: Division by zero!\n");
    return 0;
  }
}

double powr(double num1, double num2) {
  double result = 1;
  for (int i = 0; i < (int)num2; i++) {
    result *= num1;
  }
  printf("%lf\n", result);
  return result;
}

void fac(int num1) {
  if (num1 < 0) {
    printf("Factorial can't defined for negative integers.\n");
  } else if (num1 == 0) {
    printf("0! is 1\n");
  } else {
    int result = 1;
    for (int i = 1; i <= num1; i++) {
      result *= i;
    }
    printf("Factorial of %d is %d\n", num1, result);
  }
}
