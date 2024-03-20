
#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal *animal = new Dog(); // Upcasting
    animal->makeSound(); // This will call Dog's makeSound() method
    delete animal;
    return 0;
}
