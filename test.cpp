#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>

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


// a, b ,c
// abs((b_y - c_y) + b_x (a_y - c_y) + c_x (x_y - b_y ))) / 2)

float area_of_triangle(Point_2D a, Point_2D b, Point_2D c) {
    float product = a.x * (b.y - c.y) + b.x * (a.y - c.y) + c.x * (a.y - b.y);

    return abs(product / 2);
}

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

    float largest_area = 0.0;
    Point_2D first, second, third;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                float area = area_of_triangle(points[i], points[j], points[k]);
                if (area > largest_area) {
                    largest_area = area;
                    first = points[i];
                    second = points[j];
                    third = points[k];
                }
            }
        }
    }

    std::cout << "The largest area is: " << largest_area<< std::endl;
    std::cout << "First point: (" << first.x << ", " << first.y << ")" << std::endl;
    std::cout << "Second Point: (" << second.x << ", " <<  second.y << ")" << std::endl;
    std::cout << "Third Point: (" << third.x << ", " <<  third.y << ")" << std::endl;

    return 0;
}