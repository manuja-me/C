#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int choice;
  double num1, num2;

  printf("======== Calculator =======\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. power\n");
  printf("6. factorial\n");
  printf("7. exit\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  if (choice == 6) {
    printf("Enter one number: ");
    scanf("%lf", &num1);
  } else if (choice >= 1 && choice <= 5) {
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
  }

  switch (choice) {
  case 1:
    add(num1, num2);
    break;
  case 2:
    sub(num1, num2);
    break;
  case 3:
    mul(num1, num2);
    break;
  case 4:
    divi(num1, num2);
    break;
  case 5:
    powr(num1, num2);
    break;
  case 6:
    fac((int)num1);
    break;
  case 7:
    exit(0);
  }

  return 0;
}
