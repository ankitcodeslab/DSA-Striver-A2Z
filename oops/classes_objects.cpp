Classes and Objects
Class: Blueprint for creating objects.

Object: Instance of a class.

Syntax:

cpp
class Student {
    string name;
    int age;
public:
    void display() {
        cout << name << " " << age;
    }
};
Student s1; // object
