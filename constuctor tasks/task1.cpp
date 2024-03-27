#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:

    Car() : make("Unknown"), model("Unknown"), year(0) {}

    Car(std::string make, std::string model, int year) : make(make), model(model), year(year) {}

    void display() {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car car1;
    std::cout << "Car 1:" << std::endl;
    car1.display(); 

    Car car2("Hyndai", "Verna", 2023);
    std::cout << "Car 2:" << std::endl;
    car2.display(); 

    return 0;
}