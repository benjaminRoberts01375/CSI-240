/**
* @file main.cpp
* @brief  This is a driver program that illustrates how a simple class is used.
* @author Bilbo B. Baggins &  Ben Roberts
* @credits Gaddis Chapter 7
* @assignment Lecture 2.1
* @date 1/20/2020
*/

#include "square.h" //Use quotes for files to include that are custom
#include <iostream>

using namespace std;
int main() {
    cout << "Hello" << endl;
    string myStringObject; //String is the class, myStringObject is the object
    
    Square mySquare;

    
    
    mySquare.setSide(9);
    cout << "The length of the sides is " << mySquare.getSide() << endl;
    cout << "The area of the square is " << mySquare.area() << endl;
    cout << "The perimeter of the square is " << mySquare.primeter() << endl;
    
    cout << endl << endl;
    
    int temp = 5;
    Square mySquare2(temp);
    
    
    return EXIT_SUCCESS;
}
