/**
 @File songUtility.h
 @Brief Contains song class setup & function definitions
 @Author Ben Roberts
 @Credits Bilbo B. Baggins
 @Assignment Lab 4.2 - Dynamic Memory Allocation
 @Date 2/5/2020
 */


#ifndef songUtility_h
#define songUtility_h

#include <iostream>
#include <fstream>
#include <sstream>


/** Song Class
 @brief creates song objects with predefined functions for setting/getting variables as well as formatting functions
 */
class Song{
    
public:
    //Setters
    void setTitle(std::string newTitle){ title = newTitle; }
    void setArtist(std::string newArtist){ artist = newArtist; }
    void setAlbum(std::string newAlbum){ album = newAlbum; }
    void setGenre(std::string newGenre){ genre = newGenre; }
    void setYear(int newYear){ year = newYear; }
    void setDuration(int newDuration){ duration = newDuration; }
    void setRating(double newRating){ rating = newRating; }
    void setCursed(std::string newCursed) { cursed = newCursed; }
    
    //Getters
    std::string getTitle(){ return title; }
    std::string getArtist(){ return artist; }
    std::string getAlbum(){ return album; }
    std::string getGenre(){ return genre; }
    int getYear(){ return year; }
    int getDuration(){ return duration; }
    double getRating(){ return rating; }
    std::string getCursed(){ return cursed; } //You are now cursed :)
    
    //Constructors
    /**
     @Brief Default constructor for songs
     @Author Ben Roberts
     @Date 2/5/2020
     */
    Song();
    
    /**
     @Brief Configured constructor for songs
     @Author Ben Roberts
     @Date 2/5/2020
     @Param newTitle - Variable that will be set equal to the title variable
     @Param newArtist - Variable that will be set equal to the artist variable
     @Param newGenre - Variable that will be set equal to the genre variable
     @Param newYear - Variable that will be set equal to the year variable
     @Param newDuration - Variable that will be set equal to the duration variable
     @Param newRating - Variable that will be set equal to the rating variable
     @Param newCursed - Variable that will be set equal to the cursed variable
     */
    Song(std::string newTitle, std::string newArtist, std::string newGenre, int newYear, int newDuration, double newRating, std::string newCursed);
    
    
    //Destructor
    ~Song(){};
    
    //Functions
    /**
     @Brief Format per-line output when given songs
     @Author Ben Roberts
     @Date 2/5/2020
     */
    std::string formatSong();
    
    
private:
    std::string title;
    std::string artist;
    std::string album;
    std::string genre;
    int year;
    int duration;
    double rating;
    std::string cursed; //Explicit
};

/**
 @Brief Counts the number of lines there are in a file
 @Author Ben Roberts
 @Date 2/5/2020
 @Param fileName The file to count the lines of
 */
int getLineCount(std::string fileName);

/**
 @Brief Converts 1 or 0 to yes and no
 @Author Ben Roberts
 @Date 2/6/2020
 @Param value 0 or 1 values accepted to convert it to strings of "Yes" and "No".
 */
std::string numToWord(std::string value);

/**
 @Brief creates pointer to array of songs from given file
 @Author Ben Roberts
 @Date 2/5/2020
 @Param fileName The file to read songs from
 @Param size the number of lines in the file
 */
Song* getPlayList(std::string fileName, int size);

#endif
