using namespace std;

#include <iostream>
#include <iomanip>

int main() {
    //10x10 times table with headers
    const int TABLE_SIZE = 31;
    int timesTable[TABLE_SIZE][TABLE_SIZE];
    
    //Fill headers
    for (int i = 0; i < TABLE_SIZE; i++){
        timesTable[i][0] = i;
        timesTable[0][i] = i;
    }
    
    //Multiply
    for (int i = 1; i < TABLE_SIZE; i++){
        for (int j = 1; j < TABLE_SIZE; j++){
            timesTable[i][j] = timesTable[i][0] * timesTable[0][j];
        }
    }
    
    //Display
    const unsigned short int WIDTH = 5;
    
    for (int i = 0; i < TABLE_SIZE; i++){
        for (int j = 0; j < TABLE_SIZE; j++){
            cout << setw(WIDTH) << timesTable[i][j];
        }
        cout << endl;
    }
}
