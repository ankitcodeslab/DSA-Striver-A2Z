Polymorphism
Definition: Ability to take many forms.

Types:

Compile-time (Static): Function overloading, Operator overloading.

Run-time (Dynamic): Virtual functions.

Example:

cpp
class Animal {
public:
    virtual void sound() { cout << "Animal sound"; }
};
class Dog : public Animal {
public:
    void sound() override { cout << "Bark"; }
};
