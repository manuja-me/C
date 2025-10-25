#include "stats.h"

double mean(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  printf("mean: %lf", (double)sum / n);
  return (double)sum / n;
}
