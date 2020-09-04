#ifndef CALCULATOR_H
#define CALCULATOR_H
//credits to: https://www.cprogramming.com/tutorial/templates.html
template <class T> class Calculator
{
public:
    T multiply(T x, T y) { return x * y; }
    T add(T x, T y) { return x + y; }
    T subtract(T x, T y) { return x - y; }
};
//Note a quirk of C++ templates.  In nearly all cases, they are entirely implemented in the header
#endif
