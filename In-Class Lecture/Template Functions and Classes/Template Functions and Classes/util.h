#ifndef UTIL_H
#define UTIL_H

//traditional overrides
//1. square overrides
int square(int num) { return num * num; }
double square(double num) { return num * num; }

//2.  templateSquare template function.
template <class T>
T templateSquare(T num)
{
    return num * num;
}

//5.  Traditional Swap overrides
void swap(int& left, int& right)
{
    int temp = left;
    left = right;
    right = temp;
}

void swap(std::string& left, std::string& right)
{
    std::string temp = left;
    left = right;
    right = temp;
}

//7.  Implement the swap template function that works on std::strings and any number type.
template <class T>
void templateSwap (T& val1, T& val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
}

#endif
