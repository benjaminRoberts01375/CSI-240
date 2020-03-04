/**
* @file pointers.h
* @brief  Forward declarations for pointer example functions.
*
* @author Ben Roberts
* @credits Gaddis Chapter 10 & Bilbo B. Baggins
* @assignment Lecture 4.1
* @date 2/2/2020
*
*/
#ifndef POINTERS_H
#define POINTERS_H

#include <iostream>
#include <iomanip>
#include <cstdlib>


/**
* @brief squares the value pointed to by the input integer.
* @date 2/2/2020
* @param int* val - pointer to an int that will be updated in place
*/
void mySquare(int* val);
/**
* @brief sequentially initialized an array of ints with a default value
* @date 2/2/2020
* @param int* val - pointer to an int array
* @param int size - the size of the array
* @param int val - the default value for all elements of the array.
*/
void fillArray(int* arr, int size, int val);

/**
 @Brief Fill an array with randomly generated values
 @Date 2/3/2020
 @param int* arr – passed int array pointer
 @param int size – length of array
 @param int max – maximum random number
 */
void fillRandomArray(int* arr, int size, int max);


#endif
