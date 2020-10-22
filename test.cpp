#include <iostream>
#include <array>
#include <vector>

// Define a struct

struct Point_2D {
    double x;
    double y;

};


int main() { 
    // Declare a variable with our struct and initialize its members
    Point_2D my_point {2,3};

    // It is possible to initialize its members also this way: 
    // my_point.x = 2;
    // my_point.y = 3;

    // Print its contents
    std::cout << "Value of x: " << my_point.x << std::endl;
    std::cout << "Value of y: " << my_point.y << std::endl;



    return 0;
}