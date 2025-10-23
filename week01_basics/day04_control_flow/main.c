#include <stdio.h>

int main(void) {
  int choice = 0;
  int running = 1;

  while (running) {
    printf("\n=== Unit Converter Menu ===\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Meters to Kilometers\n");
    printf("4. Kilometers to Meters\n");
    printf("5. Seconds to Minutes\n");
    printf("6. Minutes to Seconds\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
      printf("Invalid input. Exiting.\n");
      break;
    }

    switch (choice) {
    case 1: {
      double Celsius = 0;
      printf("Enter the value in Celsius: ");
      if (scanf("%lf", &Celsius) != 1) {
        printf("Invalid input.\n");

        // clear input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        break;
      }
      double Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0;
      printf("%.2f Celsius = %.2f Fahrenheit\n", Celsius, Fahrenheit);
      break;
    }

    case 2: {
      double Fahrenheit = 0;
      printf("Enter the value in Fahrenheit: ");
      if (scanf("%lf", &Fahrenheit) != 1) {
        printf("Invalid input.\n");

        // clear input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        break;
      }
      double Celsius = (Fahrenheit - 32.0) * 5.0 / 9.0;
      printf("%.2f Fahrenheit = %.2f Celsius\n", Fahrenheit, Celsius);
      break;
    }

    case 3: {
      double Meters = 0;
      printf("Enter the value in Meters: ");
      if (scanf("%lf", &Meters) != 1) {
        printf("Invalid input.\n");

        // clear input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        break;
      }
      double Kilometers = Meters / 1000.0;
      printf("%.2f Meters = %.2f Kilometers\n", Meters, Kilometers);
      break;
    }

    case 4: {
      double Kilometers = 0;
      printf("Enter the value in Kilometers: ");
      if (scanf("%lf", &Kilometers) != 1) {
        printf("Invalid input.\n");

        // clear input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        break;
      }
      double Meters = Kilometers * 1000.0;
      printf("%.2f Kilometers = %.2f Meters\n", Kilometers, Meters);
      break;
    }

    case 5: {
      float Seconds = 0;
      printf("Enter the value in Seconds: ");
      if (scanf("%f", &Seconds) != 1) {
        printf("Invalid input.\n");

        // clear input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        break;
      }
      float Minutes = Seconds / 60.0;
      printf("%.2f Seconds = %.2f Minutes\n", Seconds, Minutes);
      break;
    }

    case 6: {
      float Minutes = 0;
      printf("Enter the value in Minutes: ");
      if (scanf("%f", &Minutes) != 1) {
        printf("Invalid input.\n");

        // clear input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
          ;
        break;
      }
      float Seconds = Minutes * 60.0;
      printf("%.2f Minutes = %.2f Seconds\n", Minutes, Seconds);
      break;
    }

    case 0:
      printf("Exiting program. Goodbye!\n");
      running = 0;
      break;

    default:
      printf("Invalid menu option. Try again.\n");
      break;
    }
  }

  return 0;
}
