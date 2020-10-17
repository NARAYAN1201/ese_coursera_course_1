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
 * @file stats.h
 * @brief Contains functions to perform tasks
 *
 *
 *
 * @author Narayan Sharma
 * @date 09/08/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
* @brief Find the Median in an array
*
*  This function is used to find the median of an array.
*
* @param *arr from which the median is to be find
* @param len is the length of an array
*
* @return The Median
*/
char find_median(unsigned char *arr,int len);


/**
* @brief Find the Mean in an array
*
*  This function is used to find the mean of an array.
*
* @param *arr from which the mean is to be find
* @param len is the length of an array
*
* @return The Mean
*/
char find_mean(unsigned char *arr,int len);


/**
* @brief Find the Maximum in an array
*
*  This function is used to find the maximum of an array.
*
* @param *arr from which the greater number is to be find
* @param len is the length of an array
*
* @return The Maximum
*/
char find_maximum(unsigned char *arr,int len);


/**
* @brief Find the Minimum in an array
*
*  This function is used to find the smallest of an array.
*
* @param *arr from which the smallest number is to be find
* @param len is the length of an array
*
* @return The Minimum
*/
char find_minimum(unsigned char *arr,int len);


/**
* @brief Sorting the array
*
*  This function is used to sort the array in the decreasing order.
*
* @param *arr is a pointer of the array which is to be sorted
* @param len is the length of an array
*
*/
void sort_array(unsigned char *arr,int len);


/**
* @brief Printing the array
*
*  This function is used to print the array.
*
* @param *arr is the array which is to be printed
* @param len is the length of an array
*
*/
void print_array(unsigned char *arr,int len);


/**
* @brief Printing the array statistics
*
*  This function is used to print the mean, median, maximum, minimum.
*
*/
void print_statistics(unsigned char *arr,int len);





#endif /* __STATS_H__ */
