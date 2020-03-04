/**
 @File songUtility.cpp
 @Brief Contains multi-line functions for formatting and data collection
 @Author Ben Roberts
 @Credits Bilbo B. Baggins
 @Assignment Lab 4.2 - Dynamic Memory Allocation
 @Date 2/5/2020
 */

#include "songUtility.h"

Song::Song(){ //Default constructor
    title = "";
    artist = "";
    genre = "";
    year = 0;
    duration = 0;
    rating = 0.0;
    cursed = "";
}

Song::Song(std::string newTitle, std::string newArtist, std::string newGenre, int newYear, int newDuration, double newRating, std::string newCursed){ //Configured Constructor
    title = newTitle;
    artist = newArtist;
    genre = newGenre;
    year = newYear;
    duration = newDuration;
    rating = newRating;
    cursed = newCursed;
}

std::string Song::formatSong(){
    return ("Title: " + title + " | Artist: " + artist + " | Genre: " + genre + " | Year: " + std::to_string(year) + " | Duration (Seconds): " + std::to_string(duration) + " | Rating: " + std::to_string(rating) + " | Explicit: " + cursed);
}

int getLineCount(std::string fileName){
    int lineCount = 0;
    std::string junk;
    
    std::ifstream fin(fileName); //Open file
    
    if (fin.good()){ //If good, count lines
        while (!fin.eof()){
            std::getline(fin, junk);
            lineCount++;
        }
        
        fin.close();
    }
    else{ //If bad, return zero lines
        lineCount = 0;
    }
    
    return lineCount;
}

std::string numToWord(std::string value){
    std::string output = "";
    if (value == "1"){
        output = "Yes";
    }
    else{
        output = "No";
    }
    return output;
}


Song* getPlayList(std::string fileName, int size){
    Song* playlist = new Song[size];
    
    std::ifstream fin(fileName);
    
    if (fin.good()){
        //Get through header
        std::string header;
        getline(fin, header, '\n');
        
        for(int i = 0; i < size; i++){
            
            
            //Title, Artist, Album, Genre, Year, Duration (secs), Rating, Explicit
            std::string tempTitle;
            std::string tempArtist;
            std::string tempAlbum;
            std::string tempGenre;
            std::string tempYear;
            std::string tempDuration;
            std::string tempRating;
            std::string tempCursed;
            
            getline(fin, tempTitle, ',');
            getline(fin, tempArtist, ',');
            getline(fin, tempAlbum, ',');
            getline(fin, tempGenre, ',');
            getline(fin, tempYear, ',');
            getline(fin, tempDuration, ',');
            getline(fin, tempRating, ',');
            getline(fin, tempCursed);
            
            if (tempTitle == ""){ //Incase of blank line
                break;
            }
            
            playlist[i].setTitle(tempTitle);
            playlist[i].setArtist(tempArtist);
            playlist[i].setAlbum(tempAlbum);
            playlist[i].setGenre(tempGenre);
            playlist[i].setYear(stoi(tempYear));
            playlist[i].setDuration(stoi(tempDuration));
            playlist[i].setRating(stod(tempRating));
            playlist[i].setCursed(numToWord(tempCursed));
            playlist[i].setTitle(tempTitle);
        }
    }
    
    fin.close();
    
    return playlist;
}
