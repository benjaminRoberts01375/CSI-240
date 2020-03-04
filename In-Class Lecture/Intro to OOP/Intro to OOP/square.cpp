#include <iostream> //Only for demo
#include "square.h"

int Square::area(){
    return side*side;
}

Square::Square(){
    side = 0;
    std::cout << "in the construtor where the side is: " << side << std::endl;
}
Square::~Square(){ //destructor
    std::cout << "In the destructor" << std::endl;
}


Square::Square(int s){
    side = s;
    
    std::cout << "In custom ctor" << std::endl;
    std::cout << "Side is: " << side << std::endl;
}
