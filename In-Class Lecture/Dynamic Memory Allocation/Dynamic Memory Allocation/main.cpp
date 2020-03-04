#include <iostream>
/*
 –––––––––––––––––––––––––––––––––––––––––––––––––     –––––––––––––––––––––––––––––––––––––––––––––––––
 |                     Stack                     |     |                      Heap                     |
 –––––––––––––––––––––––––––––––––––––––––––––––––     –––––––––––––––––––––––––––––––––––––––––––––––––
 |  a <–– Data                                   |     |  –––                                    –––   |
 -------------------------------------------------     | | D |                                  | D |  |
 |  b              Wasted Space                  |     |  –––                                    –––   |
 -------------------------------------------------     |                                               |
 |  c                                            |     |                                               |
 -------------------------------------------------     |                                               |
 |  d                                            |     |                                               |
 -------------------------------------------------     |                                               |
 |  1                                            |     |                                               |
 -------------------------------------------------     |                                               |
 |  2                                            |     |                                               |
 -------------------------------------------------     |                                               |
 |  3                                            |     |  –––                                    –––   |
 -------------------------------------------------     | | D |                                  | D |  |
 |  4                                            |     |  –––                                    –––   |
 –––––––––––––––––––––––––––––––––––––––––––––––––     –––––––––––––––––––––––––––––––––––––––––––––––––
 
 
 */

/**
* @file main.cpp
* @brief  This is a lecture program that illustrates dynamic memory topics from Gaddis 10.
*
* @author Ben Roberts
* @credits Gaddis Chapter 10 & Bilbo B. Baggins
* @assignment Lecture 4.2
* @date 2/4/2020
*
*/
#include <iostream>
#include "dynfunctions.h"
#include "simplesong.h"
using namespace std;


//This is not typical code but rather put here to illustrate counting of created and destroyed objects.
int SimpleSong::objectCount=0;
//

int main() {
  //1. a new integer
    
    cout << "#1" << endl;
    int* intPtr = new int;
    *intPtr = 11;
    cout << *intPtr << endl;
    //done with the pointer, let's get rid of it.
    delete intPtr;
    cout << "intPtr still has an address for a value:" << intPtr << endl;
    intPtr = nullptr;
    
  //2. a dynamically allocated array.
    
    cout << "#2" << endl;
    
    cout << "how big should your array be?:";
    int size;
    cin >> size;
    cout << endl;
    cout << size << " entered" << endl;
    
    int* intArray = new int[size];
    for(int i = 0; i < size; i++){
      intArray[i] = i;
    }
    for(int i = 0; i < size; i++){
      cout << *(intArray + i )<< " ";
    }
    //this is how  you delete an array pointer.
    delete [] intArray;
    cout << endl;
    
  //3. cleanup
  
    cout << "#3" << endl;
  
    
    cout << intArray << endl;
    intArray = nullptr;
    
  //4. returning a dynamic array from a function
  
     cout << "#4" << endl;
    
    //int* dynArray = getIntArray(size, 9);
    int* dynArray = getIntArray(size);
    for(int i = 0; i < size; i++) {
      cout << *(dynArray + i) << " ";
    }
    cout << endl;
    
    delete [] dynArray;
    dynArray = nullptr;
    
  //5. Simple declaration of a class variable
  
    cout << "#5" << endl;
    
    SimpleSong stackSong;
    stackSong.setArtist("Prince");
    stackSong.setTitle("Little Red Corvette");
    cout << stackSong.getTitle() << endl;
    cout << "number of songs after creating stackSong:" << SimpleSong::getObjectCount() << endl;

    
  //6. songs on the heap
  
    cout << "#6" << endl;
    
    SimpleSong* song0 = new SimpleSong;
    cout << "number of songs after creating song0:" << SimpleSong::getObjectCount() << endl;
    
  //7. ->
    
    cout << "#7" << endl;
    
    song0->setTitle("Hello");
    song0->setArtist("Lionel Ritchie");
    cout << "title:" << song0->getTitle() << endl;
    
  //8. another song and cleanup
    
    cout << "#8" << endl;
    
    SimpleSong* song1 = new SimpleSong;

    song1->setTitle("Hells Bells");
    song1->setArtist("ACDC");
    
    cout << "title:" << song1->getTitle() << endl;
    cout << "number of songs after creating song1:" << SimpleSong::getObjectCount() << endl;

    delete song0;
    song0 = nullptr;

    delete song1;
    song1 = nullptr;

    cout << "number of songs after deleting song0 and song1:" << SimpleSong::getObjectCount() << endl;
    
  //9. array of Simple Songs
    
    cout << "#9" << endl;
    
    SimpleSong* songArray = getSongArray(size);
    cout << "number of songs after getSongArray:" << SimpleSong::getObjectCount() << endl;

    for(int i=0; i < size; i++) {
        cout << songArray[i].getTitle() << endl;
    }
    delete [] songArray;
    songArray = nullptr;

    cout << "number of songs after delete [] songArray:" << SimpleSong::getObjectCount() << endl;
    
    cout << "About to do the final Return" << endl;
    
  return EXIT_SUCCESS;
}



