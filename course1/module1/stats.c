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
 * @brief Used to find the Mean, Median, Maximum, Minimum and also Sorting the array
 *        in descending order.
 *
 *
 *
 * @author Narayan Sharma
 * @date 09/08/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

char find_mean(unsigned char *arr,int len){
    unsigned int m = 0;
    for(int i=0;i<len;i++)
    {
        m=m+arr[i];
    }
    return m/len;
}

void sort_array(unsigned char *arr,int len){
    int i=0 , j=0 ;
    char temp;
    for(i=0 ; i<len ; i++)
    {
        for(j=0 ; j<len-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp        = arr[j];
                arr[j]    = arr[j+1];
                arr[j+1]  = temp;
            }
        }
    }
}

char find_median(unsigned char *arr,int len){
    sort_array(arr,len);
    unsigned char m;
    if(len%2 == 0)
        m = (arr[(len-1)/2] + arr[len/2])/2.0;
    // if number of elements are odd
    else
        m = arr[len/2];
    return m;
}

void print_array(unsigned char *arr,int len){
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

char find_maximum(unsigned char *arr,int len){
  unsigned char max = arr[0];
  for(int i=0;i<len;i++)
  {
      if(max < arr[i])
      {
          max = arr[i];
      }
  }
    return max;
}

char find_minimum(unsigned char *arr,int len){
    sort_array(arr,len);
    unsigned char min = arr[0];
    //printf("%d",min);
    return min;
}

void print_statistics(unsigned char *arr,int len){
    printf("Initial array:\n");
    print_array(arr,len);
    printf("\n");
    printf("Sorted array:\n");
    sort_array(arr,len);
    print_array(arr,len);
    printf("\n");
    printf("MAXIMUM: ");
    unsigned char max = find_maximum(arr,len);
    printf("%d\n",max);
    printf("\n");
    printf("MINIMUM: ");
    unsigned char min = find_minimum(arr,len);
    printf("%d\n",min);
    printf("\n");
    printf("MEAN: ");
    unsigned char mean = find_mean(arr,len);
    printf("%d\n",mean);
    printf("\n");
    printf("MEDIAN: ");
    unsigned char median = find_median(arr,len);
    printf("%d\n",median);
    printf("\n");
}


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    printf("Printing initial array:\n");
    print_array(test,SIZE);
    printf("\n");
    printf("Sorting the array:\n");
    sort_array(test,SIZE);
    print_array(test,SIZE);
    printf("\n");
    printf("Finding MAXIMUM: ");
    unsigned char max = find_maximum(test,SIZE);
    printf("%d\n",max);
    printf("\n");
    printf("Finding MINIMUM: ");
    unsigned char min = find_minimum(test,SIZE);
    printf("%d\n",min);
    printf("\n");
    printf("Finding MEAN: ");
    unsigned char mean = find_mean(test,SIZE);
    printf("%d\n",mean);
    printf("\n");
    printf("Finding MEDIAN: ");
    unsigned char median = find_median(test,SIZE);
    printf("%d\n",median);
    printf("\n");
    printf("Printing Statistics:\n");
    print_statistics(test,SIZE);

  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
