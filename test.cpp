#include <iostream>
#include <cstdlib>
#include <vector>

// Define a struct

struct Point_2D {
    double x;
    double y;

};

// INPUT ---> {????} ---> OUTPUT
//      {initialize struct}

Point_2D create_point() {
    Point_2D tmp;
    tmp.x = rand() % 10;
    tmp.y = rand() % 10;

    return tmp;
}

// Pass by refference ( don't forget &)
void initialize_in_place(Point_2D & point) {
    point.x = rand() % 10;
    point.y = rand() % 10;

}

int main() { 
    // Declare a variable with our struct and initialize its members
    Point_2D my_point = create_point(); 

    // Print its contents
    std::cout << "Value of x: " << my_point.x << std::endl;
    std::cout << "Value of y: " << my_point.y << std::endl;

    // Declare a variable with our struct and initialize its members
    Point_2D empty_point;
    initialize_in_place(empty_point);

    // Print its contents
    std::cout << "Value of x: " << empty_point.x << std::endl;
    std::cout << "Value of y: " << empty_point.y << std::endl;



    return 0;
}