#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include "rectangle.h"
using namespace std;
int main()
{
    cout << "STD" << endl;
    //1 Simple Vector using Ranges
    vector<string> strVec {"Alice", "Bob", "Charlie"};
    for(string el: strVec)
    {
        cout << el << " ";
    }
    cout << endl;
    
    //2.1 Using Iterators returned from begin on strVec
    cout << *strVec.begin() << endl;
    
    //2.2 Using Iterators returned from end()on strVec
    //cout << *(strVec.end()) << endl; //this blows up. It's giving the marker that it's at the end.
    cout << *(strVec.end()-1) << endl; //this works, note the parenthesis.
    
    //2.3 Explicitly declaring an iterator
    vector<string>::iterator strIt = strVec.begin();
    cout << "*strIt is the value pointed to by the the iterator strIt: " << *strIt << endl;
    
    //3.1 the iterator while loop
    cout << "while iterator" << endl;
    //strIt is currently at the first element.
    while(strIt != strVec.end())
    {
        cout << *strIt << " ";
        strIt++;  //forget this and you get a forever loop.
    }
    cout << endl;
    cout << "strIt is at end()" << endl;
    
    //3.2, 3.3  A for loop using auto
    cout << endl << "for loop with auto" << endl;
    for(auto it = strVec.cbegin(); it != strVec.cend(); it++)
    {
        //*it += " - changed";
        cout << *it << " ";
    }
    cout << endl;
    //3.3 if you wish to protect the elements in your container from being modified via a dereferenced iterator use
    //cgegin and cend (c stands for const)
    //uncomment the changed line and rerun
    //use cbegin, cend and observe the behavior.
    
    //3.4 Going backwards
    //a constant reverse iterator using auto
    cout << "going backwards" << endl;
    for(auto rit = strVec.crbegin(); rit != strVec.crend(); rit++)
    {
        cout << *rit << " ";
    }
    cout << endl;
    
    //4 Sets
    cout << endl << "Sets" << endl;
    
    set<int> intSet;
    intSet.insert(1);
    intSet.insert(2);
    intSet.insert(9);
    intSet.insert(4);
    intSet.insert(9);//duplicate!
    intSet.insert(3);//observe output
    
    cout << "and integer set" << endl;
    for(int i: intSet)
    {
        cout << i << " ";
    }
    
    //4.1 To do auto forward
    cout << endl << endl << "4.1 set iterator" << endl;
    for (auto sit = intSet.cbegin(); sit != intSet.cend(); sit++)
    {
        cout << *sit << " ";
    }
    
    cout << endl << endl << "4.2 reverse set iterator" << endl;
    //4.2 To do reverse
    for (auto sit = intSet.crbegin(); sit != intSet.crend(); sit++)
    {
        cout << *sit << " ";
    }
    cout << endl;
    
    //5.1 Insertion
    cout << endl << "Maps" << endl;
    map<string,string> zipCodes;
    zipCodes.insert(pair<string,string>("05489", "Underhill VT"));
    zipCodes.insert(pair<string,string>("22180", "Vienna VA"));
    zipCodes.insert(pair<string,string>("KIP5E9", "Ottawa On"));
    zipCodes.insert(pair<string,string>("22180", "Oak Hill VA")); //uh oh duplicate
    
    //5.2 Getting values with a key
    cout << zipCodes["22180"] << endl;
    //the last insert failed.  To update, don't use the insert but rather
    zipCodes["22180"] = "Updated Place";
    cout << zipCodes["22180"] << endl;
    
    //5.3 Getting keys and values usring rirst and second
    for(auto it = zipCodes.cbegin(); it != zipCodes.cend(); it++)
    {
        cout << "key: " << it->first << " " << "value: " << it->second << endl;
    }
    
    //6 To Do vector of rectangles
    cout << "Rectangles" << endl;
    
    Shape* rectPtr1 = new Rectangle("rectangle1", "hi, I'm rectangle1", 3.5, 8.1);
    Shape* rectPtr2 = new Rectangle("rectangle1", "hi, I'm rectangle2", 5.5, 10.1);
    Shape* rectPtr3 = new Rectangle("rectangle1", "hi, I'm rectangle3", 7.5, 12.1);
    
    vector<Shape*> rectVec;
    rectVec.push_back(rectPtr1);
    rectVec.push_back(rectPtr2);
    rectVec.push_back(rectPtr3);
    
    for (auto rit : rectVec)
    {
        cout << rit->toString();
        delete rit;
    }
    cout << endl;
    
    //7.1 the Random Shuffle
    //random shuffle
    cout << "random_shuffle algorithm" << endl;
    vector <char> letterVec;
    for(char letter = 'a'; letter <= 'z'; letter++)
    {
        letterVec.push_back(letter);
    }
    random_shuffle(letterVec.begin(), letterVec.end());
    
    for(auto it = letterVec.begin(); it != letterVec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    //7.2 to do the sort
    
    cout << "Sorting the vector" << endl;
    
    sort(letterVec.begin(), letterVec.end());
    
    for(auto it = letterVec.begin(); it != letterVec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    return EXIT_SUCCESS;
}
