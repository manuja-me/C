#include <stdio.h>
#include <stdlib.h>

typedef double Distance;

enum Unit {
  METER = 1,
  KILOMETER,
  CENTIMETER,
  MILLIMETER
};

const double KM_TO_M = 1000.0;
const double CM_TO_M = 0.01;
const double MM_TO_M = 0.001;

int main(void) {
  Distance input;
  enum Unit unit;
  int temp;

  printf("Enter distance value: ");
  if (scanf("%lf", &input) != 1) {
    fprintf(stderr, "Invalid distance input\n");
    return 1;
  }

  printf("Select unit (1=m, 2=Km, 3=Cm, 4=mm): ");
  if (scanf("%d", &temp) != 1 || temp < METER || temp > MILLIMETER) {
    fprintf(stderr, "Invalid unit selection\n");
    return 1;
  }

  unit = (enum Unit)temp;

  printf("\n----- Conversion Result -----\n");
  switch (unit) {
    case METER:
      printf("%.3lf meters\n", input);
      break;
    case KILOMETER:
      printf("%.3lf meters\n", input * KM_TO_M);
      break;
    case CENTIMETER:
      printf("%.3lf meters\n", input * CM_TO_M);
      break;
    case MILLIMETER:
      printf("%.3lf meters\n", input * MM_TO_M);
      break;
    default:
      fprintf(stderr, "unknown error\n");
      return 1;
  }

  return 0;
}
