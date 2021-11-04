/******************************************************************************
 *  Copyright (C) 2021 by  Kwabena Obeng-Yeboah - Kwame Nkrumah University of Science and Technology
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 * Kwabena Darkwa Obeng-Yeboah is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Houses functions that help us display the statistics of a given data set>
 *
 * <This is a header file that should house all the functions that will be needed to print the statistics of a given data set: ie; minimum, maximum, median, mean, and a sorted version of the data set that will be given>
 *
 * @author Kwabena Obeng-Yeboah
 * @date 21/10/2021 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * @brief Sorts the array from the largest element to the smallest 
 * This function takes in an array and then sorts the numbers that are contained in the array from larges to smallest 
 * @param takes in the whole array
 * @return returns the sorted version of the array
 */
void sort_array( int arr[],int n)
{
int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
  
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


/**
 *@brief Prints the entire array 
 * This function takes in an array and then prints it to the user
 * @param the array and the number of elements
 * @return the entire array whether sorted or not 
 */
void print_array(int arr[],int n){
  int i;
  for ( i = n-1; i >= 0 ; i--)
  {
    printf("%d ", arr[i]);
    printf("\n");
  }
  
}


/**
 * @brief <Prints the statistics of the data set that we have>
 *
 * <After the functions for the minimum, maximum, mean and then the median have been called and work we print them out to the console using this function>
 * @param <mimimum, maximum, mean and median> <values to be printed to the console>
 * @return<The values that are it's parameters>
 */
int print_statistic(int max,int min, float mean,float median)
  {
    printf("The maximum number in the list is %d.\nThe minimum number is %d.\nThe mean of the list is %f\nThe median is %f",max,min,mean,median);
  }
 
 
 /** @brief Finds the median in a given length of values
 *This functions takes in an array and then after given the array produces the median value for us 
 * @param <the array and the number of elements in the array as n> <the function takes in the array and then the number of elements that are existent in the array so as to do whatever manipulations it wants to do.>
 * @return Returns the median number out of all the numbers that are provided to it
 */
float find_median(int array[],int n)
  {
    float median;
    int pos1,pos2;
    if(n%2 != 0){
      pos1 = (n+1)/2;
      median = array[pos1-1];
    }

    else{
      pos1 = (n/2)-1;
      pos2 = pos1 + 1;
      median = (array[pos1]+array[pos2])/2;
      }
      return median;

  }
 
 
/** @brief Finds the mean in a given length of values
 *This functions takes in an array and then after given the array produces the mean value for us
 * @param <Array that houses numbers and the number of variables > <the whole array of numbers is an input for the function together with the number of elements in it>
 * @return Returns the mean out of all the numbers that are provided to it
 */
 float find_mean(int array[], int n)
 {
   int sum =0;
   for(int i=0; i<n; i++)
   {
     sum = sum+ array[i];
   }
   float mean =(sum/n);
   return mean;
 }

/** @brief Finds the minimum in a given length of values
 *This functions takes in an array and then after given the array produces the minimum value for us
 * @param <Array that houses numbers> <the whole array of numbers is an input for the function>
 * @return Returns the minimum out of all the numbers that are provided to it
 */
 int find_minimum(int array[])
 {
   int min = array[0];
   return min;
 }

/** @brief Finds the maximum in a given length of values
 *This functions takes in an array and then after given the array produces the maximum value for us
 * @param <Array that houses numbers> <the whole array of numbers is an input for the function>
 * @return Returns the maximum out of all the numbers that are provided to it
 */
 int find_maximum(int array[],int n)
 {
   int max = array[n-1];
   return max;
 }



#endif /* __STATS_H__ */
