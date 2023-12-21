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
  int minIndex = getIndexOfMin(arr, n);
  if(minIndex != -1){
    printf("The Index of Minimuim number as %d\n",minIndex);
  }
  int max = getMax(arr, n);
  if(max!= -1){
    printf("Max number in array %d\n",max);
  }
  int maxIndex = getIndexOfMax(arr, n);
  if(maxIndex != -1){
    printf("The max number index as %d\n",maxIndex);
  }
  int threshold = 35;
  int resultSize = 0;
  int *filterArray = filterThreshold(arr, n, threshold, &resultSize);
  if(filterArray != NULL){
    printf("ThresholdResult: ");
    for(int i = 0; i<resultSize; i++){
      printf("%d ",filterArray[i]);
    }
      printf("\n");
    // deallocate dynamic memory of this array
    free(filterArray);
  }
  int r = 3;
  int c = 5;
  int **table2D = createMultiplicationTable(r, c);
  printf("Table:\n");
  if(table2D != NULL){
    for(int i = 0; i<r; i++){
      for(int j = 0; j<c; j++){
        printf("%d ",table2D[i][j]);
      }
      printf("\n");
    }
  }

  // deallocate a dynamic memory of this array
  free(arr);

  return 0;
