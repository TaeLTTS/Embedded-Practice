#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>

// A function to implement insertion sort 
void insertionSort_Heap(int arr[], int n){   
 printf("Before Sorting of array: \n"); 
 printArray(arr, n);	
 insertionSort(arr, n); 
 printf("After InsertionSort using Heap array: \n"); 
 printArray(arr, n);
  }
