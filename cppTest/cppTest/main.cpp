//
//  main.cpp
//  cppTest
//
//  Created by Suck Lee on 2024/06/28.
//

#include <iostream>

class Point {
    unsigned x;
    unsigned y;
    const unsigned X_MAX = 1920;
    const unsigned Y_MAX = 1080;
public:
    Point(unsigned x, unsigned y) : x{x}, y{y} {}
    Point() : Point(0, 0) {}
    
    std::string showPoint() {
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
};

int main(int argc, const char * argv[]) {
    Point point{ 13, 17 };
    
    std::cout << point.showPoint() << std::endl << std::endl;
    
    std::cout << sizeof(point) << std::endl;
    std::cout << sizeof(Point) << std::endl;
    std::cout << sizeof(unsigned) * 2 + sizeof(unsigned) * 2 << std::endl;
    
    std::cout << sizeof(unsigned) << std::endl;
    
    return 0;
}
