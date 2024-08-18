#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int roll_no;
};

int main() {
    Student student{"John", 2};
    cout << student.name << endl;

    return 0;
}