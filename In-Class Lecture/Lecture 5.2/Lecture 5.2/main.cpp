#include "coordinate.h"

int main(int argc, const char * argv[]) {
    int x = 3;
    int y = 5;
    
    
    std::cout << "Before copy constructor:" << std::endl;
    Coordinate a(x, y, "Coord A");
    
    std::cout << a.printCoords() << std::endl;
    
    Coordinate b = a;
    
    std::cout << b.printCoords() << std::endl;
    
    std::cout << "After copy constructor:" << std::endl;
    b.setLabel("Coord B");
    std::cout << a.printCoords() << std::endl;
    std::cout << b.printCoords() << std::endl;
    
    
    return EXIT_SUCCESS;
}
