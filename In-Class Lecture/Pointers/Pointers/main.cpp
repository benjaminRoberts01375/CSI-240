/**
* @file main.cpp
* @brief  This is a lecture program that illustrates Pointer topics from Gaddis 10.
* @author Ben Roberts
* @credits Gaddis Chapter 10 & Bilbo B. Baggins
* @assignment Lecture 4.1
* @date 2/2/2020
*
*/
#include "pointers.h"

using namespace std;

int main(){
   //variables
   int a{6};
   long l{99};
   double d{3.14159};
   char c{'A'};
  
  //memory allocation grows down.
  cout << setw(10) << "name" << setw(10) << "type" << setw(18) << "0xAddress" << setw(16) << "long addr" << setw(8) << "bytes" << endl;
  
  cout << setw(10) << "a" << right << setw(10) << "int" << setw(18) << &a << setw(16) << (long)&a << setw(8) << right << sizeof(a) << endl;
  cout << setw(10) << "l" << right << setw(10) << "long" << setw(18) << &l << setw(16) << (long)&l << setw(8) << right << sizeof(l) << endl;
  cout << setw(10) << "d" << right << setw(10) << "double" << setw(18) << &d << setw(16) << (long)&d << setw(8) << right << sizeof(d) << endl;

   //Note the static cast for a char.  cout does not handle char without the cast.
   cout << setw(10) << "c" << right << setw(10) << "char" << setw(18) << static_cast<void *>(&c) << setw(16) << (long)&c << setw(8) << right << sizeof(c) << endl;

  
  //try switching from x86 to x64 build
    cout << "an address is: " << sizeof(&a) << " bytes in size" << endl;
    //the memory address size doesn't change but that which is pointed to does.
  
  //pointers
    int* iPtr{ nullptr };
    cout << "iPtr is: " << sizeof(iPtr) << " bytes long" << endl;
    iPtr = &a;
    
  //indirection opertor
      cout << "iPtr's value is: " << iPtr << " it points to an int whose value is: " << *iPtr << endl;
    
    
  //changeing the value that iPtr points to using the indirection operator
    *iPtr = 99;
    cout << "iPtr's value is now: " << iPtr << " it points to an int whose value is: " << *iPtr << endl;

  //can change what a pointer points to
    int i = 8;
    iPtr = &i;
    cout << "iPtr's value is now: " << iPtr << " it points to an int whose value is: " << *iPtr << endl;
    
    
  //arrays and pointers
    int anArray[] = { 1,3,4,5,6,7,8,9,10 };
    //an array name is really a pointer!
    cout << "anArray:" << anArray << endl;
    //put a break here and hunt down the array in memory.
    //you can reference the first element by dereferencing anArray
    cout << "*anArray is: " << *anArray << endl;
    //subsequent elements can be referenced by incrementing the address the + in
    //this context is pointer aware and increments by n * sizeof(int)
    //the ( ) is important.

    cout << "*(anArray + 1) is: " << *(anArray + 1) << endl;
    
  //traditional array enumeration.
    for (size_t i = 0; i < 10; i++){
       cout << anArray[i] << endl;
     }
    
  //using pointer arithmatic
    
    cout << "Pointer Enumeration" << endl;
    for (size_t i = 0; i < 10; i++){
      cout << *(anArray + i) << endl;
    }
    
  //int pointer can take the starting address of an array
    
    cout << "anArray assinged to int* aPtr" << endl;
    int* aPtr = anArray;
    for (size_t i = 0; i < 10; i++) {
       cout << aPtr[i] << endl;
       cout << *(aPtr + i) << endl;
     }
    
  //some pointer math, actually incrementing the pointer value!
    cout << "aPtr is now:" << aPtr << endl;
     for (size_t i = 0; i < 10; i++){
       cout << *aPtr << " ";
       aPtr++;
     }
     cout << "aPtr is now:" << aPtr << endl;

  //rewinding
    
    for (size_t i = 0; i < 10; i++){
      //note the change in order, we need to step back one before we print out
      //the last value.
      aPtr--;
      cout << *aPtr << " ";
    }
    cout << "aPtr is now:" << aPtr << endl;
    
  //Invalid pointers are not a good thing.

  //pointer comparison.
    
    int i1{ 500 }, i2{ 100 };
    cout << &i1 << " " << &i2 << endl;

    int* p1 = &i1;
    int* p2 = &i2;

    cout << p1 << " " << p2 << endl;

    if (p1 > p2)
    {
      cout << "p1 is greater than p2" << endl;
      cout << "but... *p1 is:" << *p1 << " and *p2 is:" << *p2 << endl;
    }
    
  //pointers as function parameters
    
    mySquare(&i1); //Passing address
    cout << i1 << endl;

    mySquare(p2); //Passing a pointer which contains address
    cout << i2 << endl;

    
    int arr1[100];
    fillArray(arr1, 100, 8);
    for (int i = 0; i < 100; i++){
        cout << arr1[i] << " ";
        if ((i+1) % 10 == 0 && i > 0){
         cout << endl;
       }
     }
    
    cout << endl;
    
    
    
    //Random array
    const short unsigned int SIZE = 100;
    const short unsigned int MAX_VAL = 100;
    int arr2[SIZE];
    srand(time(0)); //Seed
    fillRandomArray(arr2, SIZE, MAX_VAL);
   
    for (size_t i = 0; i < SIZE; i++){
        if (i % 10 == 0){
            cout << endl;
        }
        cout << setw(4) << left << *(arr2 + i);
    }
    cout << endl;
    
    
  return EXIT_SUCCESS;
}
