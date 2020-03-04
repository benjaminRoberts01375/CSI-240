/**
* @file simplesong.cpp
* @brief  This is a sample program that implements the constructor
* and destructor
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 10
* @assignment Lecture 4.2
* @date 2/4/2020
*
*/
#include "simplesong.h"

SimpleSong::SimpleSong(){
  id = objectCount++;
  std::cout << "ctor(" << id << ")" << std::endl;
}
SimpleSong::~SimpleSong(){
  --objectCount;
  std::cout << "dtor(" << id << "):" << title << std::endl;
    
}
