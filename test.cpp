#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>

// Define a struct

struct Point_2D {
    double x;
    double y;

};

Point_2D create_point() {
    Point_2D tmp;
    tmp.x = rand() % 10;
    tmp.y = rand() % 10;

    return tmp;
}


// a = (x_a, y_a)
// b = (x_b, y_b)

// sqrt((x_right)- x_left)^2 + (y_right - y_left)^2)

float distance(Point_2D left, Point_2D right) {
    float res_x = pow((right.x - left.x), 2);
    float res_y = pow((right.y - left.y), 2);

    return sqrt(res_x + res_y);
}
int main() { 
    std::array<Point_2D, 10> points;

    for (int i = 0; i < 10; i++) {
        points[i] = create_point();
        std::cout << "point [" << i << "] = (" << points[i].x << ", "<< points[i].y << ")" << std::endl;
    }

    float largest_distance = 0.0;
    Point_2D first, second;


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            float d = distance(points[i], points[j]);
            if ( d >= largest_distance) {
                largest_distance = d;
                first = points[i];
                second = points[j];
            }
        }
    }

    std::cout << "The largest distance is: " << largest_distance << std::endl;
    std::cout << "First point: (" << first.x << ", " << first.y << ")" << std::endl;
    std::cout << "Second Point: (" << second.x << ", " <<  second.y << ")" << std::endl;

    return 0;
}