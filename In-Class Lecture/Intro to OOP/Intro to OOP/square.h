/**
* @file square.h
* @brief  This is a sample program that illustrates a very simple C++ class header file
* @author Bilbo B. Baggins & Ben Roberts
* @credits Gaddis Chapter 7
* @assignment Lecture 2.1
* @date 1/20/2020
*/

#ifndef SQUAR_H //Prevents reinclusion of this file
#define SQUAR_H

class Square{
private: //Variables & functions that are private below here
    int side;
public: //Variables & functions that are public below here
    //Constructors (ctor)
    Square();
    Square(int s);
    
    //Destructor (dtor)
    ~Square();
    
    //Functions
    int getSide(){ return side; } //Inline function
    
    void setSide(int s){ side = s; } //This is a setter
    
    int area(); //Formatted as if it were a "complex function" (more than one line)
    
    int primeter(){ return 4*side; }
};

#endif
