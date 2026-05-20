#include <iostream>
#include <string>

using namespace std;

// Car class
class Car {
public:
    string brand;
    string model;
    int year;
    int price;
};

// Function to print car details
void printCar(const Car& c) {
    cout << "\n--- Car Details ---" << endl;
    cout << "Brand : " << c.brand << endl;
    cout << "Model : " << c.model << endl;
    cout << "Year  : " << c.year << endl;
    cout << "Price : $" << c.price << endl;
}

// Pass by reference example
void changeValue(int& x) {
    x = 10;
}

int main() {

    // Pass by reference demonstration
    int x = 4;

    cout << "Before change: " << x << endl;

    changeValue(x);

    cout << "After change : " << x << endl;

    // Creating first car object
    Car c1;
    c1.brand = "BMW";
    c1.model = "M5";
    c1.year = 2026;
    c1.price = 100000;

    // Creating second car object
    Car c2;
    c2.brand = "Audi";
    c2.model = "A4";
    c2.year = 2025;
    c2.price = 80000;

    // Printing car details
    printCar(c1);
    printCar(c2);

    return 0;
}
