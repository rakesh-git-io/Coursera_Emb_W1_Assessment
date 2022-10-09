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
 * @brief Header file for print statistics of a given array
 *
 * All the function declarations of the functions in implementation file are declared here.
 *
 * @author Rakesh Singha
 * @date 8-Oct-2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char *, unsigned int);
/**
 * @brief Print Statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param unsigned char * -- pointer to the array whose statistics is required to be printed
 * @param unsigned int    -- length of the array
 *
 * @return void
 */


void print_array(unsigned char *, unsigned int);
/**
 * @brief Print array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param unsigned char * -- pointer to the array whose statistics is required to be printed
 * @param unsigned int    -- length of the array
 *
 * @return void
 */


int find_median(unsigned char *, unsigned int);
/**
 * @brief Find median
 * Given an array of data and a length, returns the median value
 *
 * @param unsigned char * -- pointer to the array
 * @param unsigned int    -- length of the array
 *
 * @return int - median value
 */



int find_mean(unsigned char *, unsigned int);
/**
 * @brief Find mean
 * Given an array of data and a length, returns the mean value
 *
 * @param unsigned char * -- pointer to the array
 * @param unsigned int    -- length of the array
 *
 * @return int - mean value
 */


int find_maximum(unsigned char *, unsigned int);
/**
 * @brief Find maximum
 * Given an array of data and a length, returns the maximum value
 *
 * @param unsigned char * -- pointer to the array
 * @param unsigned int    -- length of the array
 *
 * @return int - maximum value
 */

int find_minimum(unsigned char *, unsigned int);
/**
 * @brief Find minimum
 * Given an array of data and a length, returns the minimum value
 *
 * @param unsigned char * -- pointer to the array
 * @param unsigned int    -- length of the array
 *
 * @return int - minimum value
 */


void sort_array(unsigned char *, unsigned int);
/**
 * @brief Sorts array in descending order
 * Given an array of data and a length, sorts the array from largest to smallest
 *
 * @param unsigned char * -- pointer to the array
 * @param unsigned int    -- length of the array
 *
 * @return void
 */




#endif /* __STATS_H__ */
