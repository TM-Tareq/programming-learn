#include<bits/stdc++.h>
using namespace std;


// 'this' is a pointer.It indicates the object & points to the class variable

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    // constructor creation
    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        // (*this).roll = roll;
        this->cls = cls;
        // (*this).cls = cls;
        this->gpa = gpa;
        // (*this).gpa = gpa;
    }
};

int main() {

    Student rahim(45, 5, 3.20);

    Student karim(2, 5, 5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}