#include "stats.h"
#include <stdio.h>

int main() {
  int n, choice;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("choose an option: \n");
  printf("1.Mean?\n");
  printf("2.Median?\n");
  printf("3.Mode?\n");
  printf("4.All\n");
  printf("5.Exit\n");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    mean(arr, n);
    break;
  case 2:
    median(arr, n);
    break;
  case 3:
    mode(arr, n);
    break;
  case 4:
    mean(arr, n);
    printf("\n");
    median(arr, n);
    printf("\n");
    mode(arr, n);
    printf("\n");
    break;
  case 5:
    printf("Exiting...\n");
    break;
  default:
    printf("Invalid choice!\n");
    break;
  }

  return 0;
}
