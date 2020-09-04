#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
#include <fstream>

namespace benSpace //pick your own
{
/** class List
 *  @brief a simple Linked List class used to illustrates topics from Gaddis 17
 */
class List {
protected:
    struct Node {
        int data;
        Node* next;
        //Remember a struct can have a constructor, just everything is public.
        Node(int iVal, Node* ptrNext = nullptr) :data{ iVal }, next{ ptrNext }{}
    }; //end Node
    Node* head; //Each list has a head
public:
    List(){ head = nullptr; } //default constructor
    //4.
    ~List(); //there is a lot of action in the destructor, implement it in the .cpp file.
    //2.
    void push_back(int number);
    //3.
    void walk() const;
    //5.
    void push(int number);
    //6.
    int size() const;
    //7.
    void remove(int number);
    //8.
    int load(std::string fileName);
}; //end List
}//end name space
#endif
