#include <iostream>
#include <string>

using namespace std;

// Class to store student details
class Student {
public:
    string name;
    int rollNumber;
    float gpa;

    void displayStudentInfo() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "GPA        : " << gpa << endl;
    }
};

// Class to store car details
class Car {
public:
    string brand;
    string model;
    int year;

    void displayCarInfo() {
        cout << "\n--- Car Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year : " << year << endl;
    }
};

int main() {

    // Creating first student object
    Student s1;
    s1.name = "Ankit";
    s1.rollNumber = 2430011;
    s1.gpa = 8.0;

    // Creating second student object
    Student s2;
    s2.name = "Raghav";
    s2.rollNumber = 2430012;
    s2.gpa = 8.1;

    // Display student information
    s1.displayStudentInfo();
    s2.displayStudentInfo();

    // Creating car object
    Car c1;
    c1.brand = "BMW";
    c1.model = "M5";
    c1.year = 2026;

    // Display car information
    c1.displayCarInfo();

    return 0;
}
