#include <iostream>

using namespace std;

int main(){
    int test = 32;
    int* testPtr { nullptr };
    testPtr = &test;
    
    cout << "Output address using variable: " << &test << endl << endl;
    cout << "Output address using pointer: " << testPtr << endl << endl;
    cout << "Output value using pointer: " << *testPtr << endl << endl;
    
    //Change value
    *testPtr = 64;
    cout << "Pointer & variable value changed to: " << *testPtr << endl << endl;
    cout << "Location remains the same: " << testPtr << endl << endl;
    return EXIT_SUCCESS;
}
