#ifndef LINKEDLIST_H
#define LINKEDLIST_H

//#1.  The Node
//#2.  The namespace
namespace BenSpace {

struct Node
{
  int data; //simple example.  You can replace with a Song, Coordinate or pointers to the same.
  Node* next;
  //Remember a struct can have a constructor, just everything is public.
  Node(int iVal, Node* ptrNext = nullptr) :data{ iVal }, next{ ptrNext }{}
}; //end Node

}
#endif
