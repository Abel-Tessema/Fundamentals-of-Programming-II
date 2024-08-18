#include <iostream>

using namespace std;

class Area {
public:
    void setDim(double length, double breadth) {
        this->length = length;
        this->breadth = breadth;
    }
    double getArea() {
        return length * breadth;
    }
    
private:
    double length;
    double breadth;
};

int main() {
    double length;
    double breadth;
    Area area;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    area.setDim(length, breadth);
    cout << "Its area is: " << area.getArea() << "." << endl;

    return 0;
}