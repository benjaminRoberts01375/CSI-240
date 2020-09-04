#include <iostream>
#include "util.h"
#include "calculator.h"

using namespace std;

int main()
{
    //2  Calling square
    int a = 5;
    double b = 7;
    
    cout << "Using overloads" << endl;
    cout << square(a) << endl;
    cout << square(b) << endl;
    
    //4 Calling templateSquare
    cout << "Using the template class" << endl;
    cout << templateSquare(a) << endl;
    cout << templateSquare(b) << endl;
    
    //6 Calling the traditional swap
    cout << endl << "Traditional swap: " << endl;
    
    int left = 777;
    int right = 999;
    
    swap(left, right);
    cout << "left:" << left << " right:" << right << endl;
    
    std::string strLeft = "left";
    std::string strRight = "right";
    
    swap(strLeft, strRight);
    cout << "left:" << strLeft << " right:" << strRight << endl;
    
    //7
    cout << "Swapping back with a template" << endl;
    templateSwap(left, right);
    templateSwap(strLeft, strRight);
    cout << "left:" << left << " right:" << right << endl;
    cout << "left:" << strLeft << " right:" << strRight << endl;
    
    //9.  using the Calculator Class Template
    //this instance handles ints;
    //and this one does doubles
    cout << endl << "Template classes:" << endl;
    Calculator<int> intCalculator;
    cout << intCalculator.multiply(left, right) << endl;
    cout << intCalculator.add(left, right) << endl;
    cout << intCalculator.subtract(left, right) << endl;
    
    //and this one does doubles
    Calculator<double> dblCalculator;
    cout << dblCalculator.multiply(50.0, 3.3) << endl;
    cout << dblCalculator.add(50.0, 3.3) << endl;
    cout << dblCalculator.subtract(50.0, 3.3) << endl;
}
