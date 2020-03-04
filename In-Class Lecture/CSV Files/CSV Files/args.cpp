/**
* @file args.cpp
* @brief  This is a short program that demonstrates command line arguments and
* rudimentary CSV parsing
* @author Bilbo B. Baggins
* @assignment Lecture 3.2
* @date 1/29/2020
*
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/**
* @brief parses in input csv file for inventory items and counts the lines of inventory read.
* @date 1/28/2020
* @param int argc  The number of program arguments, the first being the program name
* @param char* argv[] A pointer to an argument array argv[1] should have the path to
* an inventory file.
* @return int representing program success
*/
int main(int argc, char* argv[]){

  cout << "The Number of Arguments are:" << argc << endl;
  if (argc == 2)
  {
    //the first argment is always the program name with full path.
    cout << argv[0] << endl;
    //in our case, the second argument is the file you want to open
    cout << argv[1] << endl;
    string fileName = argv[1];
    ifstream input(fileName);
    if (input.good()) {
      cout << "Reading Input!" << endl;
      string line;
      //this gets the first line which looks like this:
      ////Item, SerialNumber, Description, Price, OnHand
      getline(input, line);
      cout << line << endl;
      //this gets the remaining lines.
      
      unsigned short linesRead{};
      while (!input.eof())
      {
        string item;
        getline(input, item, ',');
        string serialNumber;
        getline(input, serialNumber, ',');
        string description;
        getline(input, description, ',');
        string strPrice;
        getline(input, strPrice, ',');
        string strOnHand;
        getline(input, strOnHand);
        //convert strPrice into a float.
        float price = stof(strPrice);
        //convert strOnHand into an int.
        int onHand = stoi(strOnHand);
        linesRead++;
        cout << item << ":" << serialNumber << ":" << description << ":" << price << ":" << onHand << endl;
      }
      cout << linesRead << " lines were read" << endl;
      input.close();
    }
    else
    {
      cout << "File input error" << endl;
    }
  }
  else
  {
    cout << "Invalid number of Arguments! " << argv[0] << endl;
  }
}
