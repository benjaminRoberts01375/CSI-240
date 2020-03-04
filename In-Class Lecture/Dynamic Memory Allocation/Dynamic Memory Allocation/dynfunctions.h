/**
* @file dynfunctions.h
* @brief  Forward declarations for dynamic memory example functions.
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 10
* @assignment Lecture 4.2
* @date 2/4/2020
*
*/
#ifndef DYNFUNCTIONS_H
#define DYNFUNCTIONS_H
#include "simplesong.h"
/**
* @brief dynamically creates an array of integers of size size.
* and optionally sets each element to a default value.
* @date 2/4/2020
* @param int size - size of the array
* @param int default_value default to 0 but can be overriden with
* this optional parameter
* @return int* to the first element in the array.
*/
int* getIntArray(int size, int default_value = 0);
/**
* @brief dynamically creates an array of SimpleSongs of size size.
* @date 2/4/2020
* @param int size - size of the array
* this optional parameter
* @return SimpleSong* to the first element in the SimpleSong array.
*/
SimpleSong* getSongArray(int size);
#endif //DYNFUNCTIONS_H
