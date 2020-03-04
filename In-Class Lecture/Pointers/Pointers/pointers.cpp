
/**
* @file pointers.cpp
* @brief  Implementation file for pointer example functions.
*
* @author Ben Roberts
* @credits Gaddis Chapter 10 & Bilbo B. Baggins
* @assignment Lecture 4.1
* @date 2/2/2020
*
*/
//#include <stddef.h> //needed in repl.it for size_t
#include "pointers.h"

void mySquare(int* val)
{
  *val *= *val;
}

void fillArray(int* arr, int size, int val){
  for (size_t i = 0; i < size; i++){
    arr[i] = val;
  }
}

void fillRandomArray(int* arr, int size, int max){
    for (size_t i = 0; i < size; i++){
        arr[i] = rand() % max + 1;
    }
}
