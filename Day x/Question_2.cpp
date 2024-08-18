#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
public:
    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    };
    double perimeter() {
        return side1 + side2 + side3;
    }
    double area() {
        double halfPerimeter = perimeter() / 2;
        return sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));
    }
private:
    double side1;
    double side2;
    double side3;
};

int main() {
    Triangle triangle{3, 4, 8};
    cout << "Perimeter: " << triangle.perimeter() << endl;
    cout << "Area: " << triangle.area() << endl;

    return 0;
}