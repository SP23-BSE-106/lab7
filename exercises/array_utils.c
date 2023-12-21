#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

void printArray(const int *arr, int n) {
  if(arr == NULL) {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for(int i=0; i<n-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n-1]);
  return;
}

void printTable(int **table, int n, int m) {
  if(table == NULL) {
    printf("[null]\n");
    return;
  }
  for(int i=0; i<n; i++) {
    printArray(table[i], m);
  }
  return;
}

int * generateRandomArray(int size) {
  if(size < 0) {
    return NULL;
  }
  int randomArr[size];
  for(int i=0; i<size; i++) {
    randomArr[i] = rand() % 100;
  }
  return randomArr;
}

int getSum(int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int total = 0;
  for(int i=0; i<size; i++) {
    total += arr[i];
    arr[i] = 0;
  }
  return total;
}

void freeTable(int **table, int n) {
  if(table == NULL) {
    return;
  }
  for(int i=0; i<n; i++) {
    free(table[i]);
  }
  free(table);
}

double getMean(const int *arr, int size) {
  //TODO: implement
  if(arr == NULL){
    printf("Invalide address or no address of array\n");
    return -1;
  }
   if(size == 0){
    printf("Invalide Size..\n");
    return -1;
  }
  double sum = 0.0;
  for(int i = 0; i<size; i++){
    sum += arr[i];
  }
  return sum/size;
}

int getMin(const int *arr, int size) {
  //TODO: implement
  if(arr == NULL){
    printf("Invalide address or no address of array\n");
    return -1;
  }
  // check the size because we cannot find the Minimum of 1 element
  if(size == 0){
    printf("Invalide Size..\n");
    return -1;
  }
  int min = arr[0];
  for(int i = 0; i < size; i++){
    if(arr[i] < min){
      min = arr[i];

    }
  }
  return min;
}

int getIndexOfMin(const int *arr, int size) {
  //TODO: implement
  if(arr == NULL){
    printf("Invalide array or No Address...\n");
    return -1;
  }
  int min = arr[0];
  int minIndex = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] < min){
      min = arr[i];
      minIndex = i;

    }
  }
  return minIndex;
}

int getMax(const int *arr, int size) {
  //TODO: implement
  if(arr == NULL){
    printf("Invalide array...\n");
    return -1;
  }
  int max = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int getIndexOfMax(const int *arr, int size) {
  //TODO: implement
  if(arr == NULL){
    printf("Invalide array...");
    return -1;
  }
  int max = 0;
  int maxIndex = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
      maxIndex = i;
    }

  }
  return maxIndex;
}

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  //TODO: implement
  if(arr == NULL || resultSize == NULL){
    printf("Invalide array....");
    return NULL;
  }
  int count = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] >= threshold){
      count++;
    }
  } 
  int *filterArray = (int *)malloc(count * sizeof(int));
  int index = 0;
  for(int i = 0; i<size; i++){
    if(arr[i]>=threshold){
       filterArray[index++] = arr[i];
    }
    *resultSize = count;
  }
  return filterArray;
}

int **createMultiplicationTable(int n, int m) {
  //TODO: implement
  if(n == 0 || m == 0){
    printf("Invalide inpute...\n");
    return NULL;
  }
  int **table = (int **)malloc(n * sizeof(int *));
  if(table == NULL){
    printf("Invalide Memory allocation...\n");
    return NULL;
  }
  for(int i = 0; i<n; i++){
    if(table[i] == NULL){
      printf("Invalide memory Allocation for Column index...\n");
    }
  }
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      table[i][j] = (i + 1) * (j + 1);
    }
  }
  return table;
}
