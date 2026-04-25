#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int wheels;

public:
    void setWheels(int w) {
        wheels = w;
    }

    void displayWheels() {
        cout << "Number of wheels: " << wheels << endl;
    }
};

// Derived from Vehicle
class Car : public Vehicle {
protected:
    string model;

public:
    void setCar(string m, int w) {
        model = m;
        setWheels(w);
    }

    void displayCar() {
        cout << "Car model: " << model << endl;
        displayWheels();
    }
};

// Derived from Car
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    void setElectricCar(string m, int w, int b) {
        setCar(m, w);
        batteryCapacity = b;
    }

    void displayElectricCar() {
        displayCar();
        cout << "Battery capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar ec;
    ec.setElectricCar("Tesla Model 3", 4, 75);
    cout << "\nElectric Car Details:\n";
    ec.displayElectricCar();
    return 0;
}
 