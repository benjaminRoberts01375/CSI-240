#include <iostream>
#include <fstream>
#include "linkedlist.h"

using namespace std;
using namespace BenSpace;
//2.  custom Name space declaration

int main()
{
    
  //3  //declare the very first node, often called the head
  Node* head = nullptr;
  
  //3.1.  Allocation after adding namespace
  head = new Node(100);
  //look at ctor, data is set to 100 and next is set to nullptr
  cout << "data:" << head->data << " next:" << head->next << endl;
  
  //3.2 Node 2 and linking
  //lets create the second Node
  Node* node2 = new Node(200);
  
  //link head and node2 like this
  head->next = node2;
  
  //3.3 node3 and the rest
  Node* node3 = new Node(300);
  node2->next = node3;
  
  //node4
  Node* node4 = new Node(400);
  node3->next = node4;
  
  //head->node2->node3->node4->nullptr;
  
  
  //4 iterate through the nodes
  Node* seeker = head;
  while(seeker)
  {
    cout << "data: " << seeker->data << " ";
    seeker = seeker->next;
  }
  cout << endl;
  
  //5.1 declare a numList
  //TODO HERE
  
  
  //5.2 Populate the List
  
  
  //5.3 Iterate through the List, printing out the list values in reverse
 
}
