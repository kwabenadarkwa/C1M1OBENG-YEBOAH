/******************************************************************************
 * Copyright (C) 2021 by Kwabena Obeng-Yeboah - Kwame Nkrumah University of Science and Technology
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 * Kwabena Darkwa Obeng-Yeboah is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <To show the statistics of a given data set >
 *
 * <The program is to help us get the maximum, minimum, the mean , the median and a sorted data set after we have been given the data set.>
 *
 * @author <Kwabena Obeng-Yeboah>
 * @date <21/10/2021 >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
#include <math.h>

/* Size of the Data Set */
#define SIZE (40)


void main() {

  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 sort_array(test,SIZE);
 print_array(test,SIZE);
 print_statistic(find_maximum(test,SIZE),find_minimum(test),find_mean(test,SIZE),find_median(test,SIZE));


}

