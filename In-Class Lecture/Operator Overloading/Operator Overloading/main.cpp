/**
 * @file main.cpp
 * @brief  This is a lecture program that illustrates operator overloading.
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 11
 * @assignment Lecture 6.1
 * @date 2/17/2020
 *
 */
#include <iostream>
#include "coordinate.h"
using namespace std;

int main()
{
    Coordinate a(100, 200, "AAAAAAA");
    cout << a.printCoordinate() << endl;
    
    //coordinate b does not yet exist
    //this is assignment and not true construction.
    //requires a copy contructor.
    cout << "start Coordinate b = a" << endl;
    Coordinate b = a;
    cout << "end Coordinate b = a" << endl;
    
    cout << b.printCoordinate() << endl;
    b.setLabel("BBBBBBB");
    cout << b.printCoordinate() << endl;
    cout << a.printCoordinate() << endl;
    
    //***Lecture 6.1
    
    
    //1 Overriding the Assignment Operator =
    Coordinate c(1024,768,"CCCCCCC");
    Coordinate d(1099, 1024, "DDDDDDD");
    //two existing objects
    c = d;
    c.setLabel("CCCCCCAGAIN");
    cout << "d label is now: " << d.printCoordinate() << endl;
    
    //memory fault here when things go out of scope.
    
    //1.3.  self assignment
    a = a;
    
    //1.4.  explicit operator
    Coordinate e(10,10,"EEEEEE");
    //Explicitly calling the = member function
    d.operator=(e);  //same as d = e;
    cout << d.printCoordinate() << endl;
    
    //2.3  overriding ==
    cout << boolalpha << (a == b) << endl;
    cout << boolalpha << (a == e) << endl;
    
    //3.3 main
    Coordinate f(100,100,"FFFFFFF");
    Coordinate g(200,200,"GGGGGGG");
    cout << (f + g).printCoordinate() << endl;
    
    //4.3 Friends <<
    cout << f << endl;
    //4.6 Friends >>
    
    cin >> f;
    cout << f << endl;
    
    Coordinate l(100,100,"LLLLLLL");
    Coordinate m(50,75,"MMMMMMM");
    cout << (l - m).printCoordinate() << endl;
    cout << (l + m).printCoordinate() << endl;
    
    return EXIT_SUCCESS;
}
