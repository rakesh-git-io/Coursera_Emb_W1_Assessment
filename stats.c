/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Implementation file for statistics
 *
 * Analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set.
 * In addition, reorder this data set from large to small. All statistics are rounded down to the nearest integer. 
 * After analysis and sorting is done, data is printed to the screen in nicely formatted presentation.
 *
 * @author Rakesh Singha
 * @date 8-Oct-2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned int length = SIZE;

  /* Statistics and Printing Functions Go Here */
  print_array(test, length);
  print_statistics(test, length);
  sort_array(test, length);
  print_array(test, length);
  return;
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *arr, unsigned int len){
  printf("Minimum - %d \n", find_minimum(arr, len));
  printf("Maximum - %d \n", find_maximum(arr, len));
  printf("Mean    - %d \n", find_mean(arr, len));
  printf("Median  - %d \n", find_median(arr, len));  
  return;
}

void print_array(unsigned char *arr, unsigned int len){
  for(int i =0; i<len; i++)
  {
    printf("\nArray[%d]  -  %d", i, arr[i]);
  }
  printf("\n");
  return;
}

int find_median(unsigned char *arr, unsigned int len){
  unsigned char arr2[SIZE];
  for(int i=0; i<len;i++)
  {
    arr2[i] = arr[i];
  }
  sort_array(arr2, len);

  if(len%2==0)
    return (arr2[(len/2)-1] + arr2[len/2])/2;
  else
    return arr2[(len-1)/2];  
}

int find_mean(unsigned char *arr, unsigned int len){
  int sum = 0;
  for(int i=0; i<len;i++)
  {
    sum = sum + arr[i];
  }
  return sum/len;  
}

int find_maximum(unsigned char *arr, unsigned int len){
  int max=arr[0];
  for(int i=1; i<len; i++)
  {
    if(arr[i]>max)
      max = arr[i];
  }
  return max;
}

int find_minimum(unsigned char *arr, unsigned int len){
  int min = arr[0];
  for(int i=1; i<len; i++)
  {
    if(arr[i]<min)
      min = arr[i];
  }
  return min;
}

void sort_array(unsigned char *arr, unsigned int len){
  int i, key, j;
  for (i = 1; i < len; i++) {
    key = arr[i];
    j = i - 1;
  
    while (j >= 0 && arr[j] < key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  return;
}

