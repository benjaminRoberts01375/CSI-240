/**
* @file simplesong.h
* @brief  This is a sample program that declares a very limited Song class
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 10
* @assignment Lecture 4.2
* @date 2/4/2020
*
*/

#ifndef SIMPLESONG_H
#define SIMPLESONG_H
#include <string>
#include <iostream>

/** class SimpleSong
 *  @brief an simple Song class that is a subset of functionaly created by students
 *  in their team programming projects.
 */
class SimpleSong
{

  private:
  std::string title;
  std::string artist;
  int id;
    
  public:
  SimpleSong();
  ~SimpleSong();
  std::string getTitle(){return title;}
  std::string getArtist(){return artist;}
  void setTitle(std::string title){ this->title = title; }
  void setArtist(std::string artist){ this->artist = artist; }
  //used to count.  This variable is the same for all instances of the class SimpleSong
  //and is public only for debug reasons.
  static int objectCount;
  /**
  * @brief returns the number of SimpleSong objects contructed and allocated during this program run .
  * @date 2/4/2020
  * @return int the number of objects
  */
  static int getObjectCount(){ return objectCount; }

};

#endif
