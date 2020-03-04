/**
 @File main.cpp
 @Brief Calls functions for formatting when given songs to use via arguments
 @Author Ben Roberts
 @Credits Bilbo B. Baggins
 @Assignment Lab 4.2 - Dynamic Memory Allocation
 @Date 2/5/2020
 */

#include "songUtility.h"

int main(int argc, char *argv[]) {
    
    std::string fileName = argv[1];
    unsigned short int lineCount = getLineCount(fileName);
    
    Song* songList = getPlayList(fileName, lineCount);
    
    for (int i = 0; i < lineCount - 1; i++){ //Accounts for extra line from header
        std::cout << songList[i].formatSong() << std::endl;
    }
    
    delete [] songList;
    songList = nullptr;
    
    return EXIT_SUCCESS;
}
