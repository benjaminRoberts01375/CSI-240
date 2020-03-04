/**
 * @file main.cpp
 * @brief  This is a lecture program that illustrates Linked List topics from Gaddis 17.
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 17
 * @assignment Lecture 8.1
 * @date 3/2/2020
 *
 */
#include <iostream>
#include <fstream>
#include "linkedlist.h"

using namespace std;


int main()
{
    bilbo::List linkedList;
    linkedList.push_back(100);
    linkedList.push_back(200);
    linkedList.push_back(300);
    linkedList.push(3);
    linkedList.push(2);
    linkedList.push(1);
    linkedList.walk();
    
    return EXIT_SUCCESS;
}
