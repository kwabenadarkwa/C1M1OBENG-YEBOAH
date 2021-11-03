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
 * @file <stats.h> 
 * @brief <Houses functions that help us display the statistics of a given data set>
 *
 * <This is a header file that should house all the functions that will be needed to print the statistics of a given data set: ie; minimum, maximum, median, mean, and a sorted verssion of the data set that will be given>
 *
 * @author <Kwabena Obeng-Yeboah>
 * @date <21/10/2021 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Prints the statistics of the data set that we have>
 *
 * <After the functions for the minimum, maximum, mean and then the median have been called and work we print them out to the console using this function>
 */
/** @param <mimimum, maximum, mean and median> <values to be printed to the console>
 * @return<The values that are it's parameters>
 */
int print_statistic()
  {
  }
 
 *
 /** @brief Finds the median in a given length of values
 *This functions takes in an array and then after given the array produces the median value for us 
 * @param <Array that houses numbers> <the whole array of numbers is an input for the fucntion>
 * @return Returns the median number out of all the numbers that are provided to it
 */
int find_median()
  {
  }
 
 
/** @brief Finds the mean in a given length of values
 *This functions takes in an array and then after given the array produces the mean value for us
 * @param <Array that houses numbers> <the whole array of numbers is an input for the fucntion>
 * @return Returns the mean out of all the numbers that are provided to it
 */
 int find_mean();
 {
 }

/** @brief Finds the maximum in a given length of values
 *This functions takes in an array and then after given the array produces the maximum value for us
 * @param <Array that houses numbers> <the whole array of numbers is an input for the fucntion>
 * @return Returns the maximum out of all the numbers that are provided to it
 */
 int find_maximum();
 {
 }

/** @brief Finds the mimimum in a given length of values
 *This functions takes in an array and then after given the array produces the mimimum value for us
 * @param <Array that houses numbers> <the whole array of numbers is an input for the function>
 * @return Returns the minimum out of all the numbers that are provided to it
 */
 int find_minimum();
 {
 }

/**@brief Sorts the array from the largest element to the smallest 
 * This function takes in an array and then sorts the numbers that are contained in the array from larges to smallest 
 * @param takes in the whole array
 * @return returns the sorted version of the array
 */
int sort_array();
{

}


#endif /* __STATS_H__ */
