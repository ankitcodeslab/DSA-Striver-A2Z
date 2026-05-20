#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    int price;

    // Parameterized constructor
    Car(string b, string m, int y, int p)
        : brand(b), model(m), year(y), price(p) {}

    // Function to display car details
    void display() const {
        cout << "\n--- Car Details ---" << endl;
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
        cout << "Price : $" << price << endl;
    }
};

int main() {

    // Creating car objects using constructor
    Car c1("BMW", "M5", 2026, 100000);
    Car c2("Audi", "A4", 2025, 80000);

    // Displaying details
    c1.display();
    c2.display();

    return 0;
}
