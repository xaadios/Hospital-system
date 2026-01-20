#include <iostream>
#include <string>
using namespace std;


class Student {
public:
    // Constructor
    Patient(string n, int a) {
        name = n;
        age = a;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(const string& n) {
        name = n;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }
};