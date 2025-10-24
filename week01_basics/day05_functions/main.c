#include <fenv.h>
#include <stdatomic.h>
#include <stdio.h>

// function prototypes
double c_to_f(double c);
double f_to_c(double f);
double m_to_km(double m);
double km_to_m(double km);
double s_to_min(double s);
double min_to_s(double min);

void menu();

int main(void) {
  int choice;
  int running = 1;

  while (running) {
    menu();
    printf("Enter your choice: ");
    if (scanf("%d", &choice) != 1) {
      printf("Invalid input. Exiting\n");
      break;
    }

    double input;
    switch (choice) {
    case 1:
      printf("Enter Celsius: ");
      scanf("%lf", &input);
      printf("%.2f C = %.2f F\n", input, c_to_f(input));
      break;
    case 2:
      printf("Enter Fahrenheit: ");
      scanf("%lf", &input);
      printf("%.2f C = %.2f F\n", input, f_to_c(input));
      break;
    case 3:
      printf("Enter meters: ");
      scanf("%lf", &input);
      printf("%.2f C = %.2f F\n", input, m_to_km(input));
      break;
    case 4:
      printf("Enter Kilometers: ");
      scanf("%lf", &input);
      printf("%.2f C = %.2f F\n", input, km_to_m(input));
      break;
    case 5:
      printf("Enter Seconds: ");
      scanf("%lf", &input);
      printf("%.2f s = %.2f min\n", input, s_to_min(input));
      break;
    case 6:
      printf("Enter Minutes: ");
      scanf("%lf", &input);
      printf("%.2f min = %.2f s\n", input, min_to_s(input));
      break;
    case 0:
      printf("Exiting program. \n");
      running = 0;
      break;
    default:
      printf("Invalid option. Try again.\n");
    }
  }
  return 0;
}

// Functi definitions;
double c_to_f(double c) { return c * 9.0 / 5.0 + 32.0; }
double f_to_c(double f) { return (f - 32.0) * 5.0 / 9.0; }
double m_to_km(double m) { return m / 1000.0; }
double km_to_m(double km) { return km * 1000.0; }
double s_to_min(double s) { return s / 60.0; }
double min_to_s(double min) { return min * 60.0; }

void menu() {
  printf("\n=== Unit Converter ===\n");
  printf("1. Celsius to Fahrenheit\n");
  printf("2. Fahrenheit to Celsius\n");
  printf("3. Meters to Kilometers\n");
  printf("4. Kilometers to Meters\n");
  printf("5. Seconds to Minutes\n");
  printf("6. Minutes to Seconds\n");
  printf("0. Exit\n");
}
