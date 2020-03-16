#include "linkedlist.h"
#include <iostream>

using namespace benSpace;

//2.1
void List::push_back(int number){
    //does the list have an item?
    if(head) {
        Node* seeker = head;
        while(seeker->next) {
            seeker=seeker->next;
        }
        //we should be at the end of the list
        seeker->next = new Node(number);
    }
    else {
        //empty
        head = new Node(number);
    }
}
//3.1
void List::walk() const {
    Node* seeker = head;
    while(seeker){
        std::cout << seeker->data << " [" << seeker << "]" << std::endl;
        seeker = seeker->next;
    }
}
//4.1 List::~List()
List::~List() {
    Node* seeker = head;
    while(seeker) {
        Node* collector = seeker;
        seeker=seeker->next;
        //now that we've moved on to the next Node
        //we can delete the one we just bypassed.
        std::cout << collector->data << "~" << collector << "~" << std::endl;
        delete collector;
    }
    head = nullptr;
}
//5.1  void List::push(int number)
void List::push(int number) {
    Node* newNode = new Node(number, head);
    head = newNode;
}

//6
int List::size() const{
    int len = 0;
    Node* seeker = head;
    while(seeker){
        len++;
        seeker=seeker->next;
    }
    return len;
}
//7
void List::remove(int number){
    Node* seeker = head;
    Node* pSeeker = seeker;
    while(seeker) {
        if(seeker->data == number){
            std::cout << seeker->data << "-" << seeker << "-" << std::endl;
            pSeeker->next = seeker->next;
            delete seeker;
        }
        pSeeker = seeker;
        seeker = seeker->next;
    }
}
//8
int List::load(std::string fileName){
    int added = 0;
    std::string readNum = "";
    //std::ifstream input(fileName, std::ios::in);
    std::ifstream input(fileName);
    
    if (input.good()){
        while (!input.eof()){
            getline(input, readNum);
            if (readNum != ""){
                push_back(stoi(readNum));
                added++;
            }
        }
        
        input.close();
    }
    return added;
}
