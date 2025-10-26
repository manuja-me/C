#include "stats.h"
#include <stdio.h>

void mode(int arr[], int n) {
  int maxCount = 0;
  int modeVal = arr[0];

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (arr[j] == arr[i])
        count++;
    }
    if (count > maxCount) {
      maxCount = count;
      modeVal = arr[i];
    }
  }

  printf("Mode: %d (appears %d times)\n", modeVal, maxCount);
}
