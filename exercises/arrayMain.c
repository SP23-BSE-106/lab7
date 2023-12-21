#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv) {

  //seed the random number generator with the current time
  srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);

  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  printArray(arr, n);

 double mean= getMean(arr, n);
  if(mean!= -1){
  printf("The mean of Numbers as %f\n",mean);
  }
  int min = getMin(arr, n);
  if(min != -1){
    printf("The minimum as %d\n",min);
  }
}
