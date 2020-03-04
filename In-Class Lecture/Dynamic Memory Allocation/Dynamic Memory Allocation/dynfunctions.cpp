/**
* @file dynfunctions.cpp
* @brief  Implementation for dynamic memory example functions.
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 10
* @assignment Lecture 4.2
* @date 2/4/2020
*
*/
#include "dynfunctions.h"
#include "simplesong.h"

int* getIntArray(int size, int default_value) {
  int* intArray = new int[size];
  for(int i = 0; i < size; i++) {
    intArray[i] = default_value;
  }
  return intArray;
}

SimpleSong* getSongArray(int size) {
  SimpleSong* songArray = new SimpleSong[size];
  for(int i = 0; i < size; i++) {
    //in this case we are dealing with an actual song object and not a pointer
    //to a song object.  Therefore we use . instead of a ->
    songArray[i].setTitle("Song " + std::to_string(i));
    songArray[i].setArtist("Artist " + std::to_string(i));
  }
  return songArray;
}
