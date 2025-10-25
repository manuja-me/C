#include "stats.h"
#include <stdlib.h>

int compareInts(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}

double median(int arr[], int n) {
  int *temp = (int *)malloc(n * sizeof(int));
  if (temp == NULL) {
    return 0.0;
  }
  for (int i = 0; i < n; i++) {
    temp[i] = arr[i];
  }
  
  qsort(temp, n, sizeof(int), compareInts);

  double result;
  if (n % 2 != 0) {
    result = temp[n / 2];
  } else {
    result = (temp[(n / 2) - 1] + temp[n / 2]) / 2.0;
  }

  free(temp);
  printf("Median: %lf ", result);
  return result;
}
