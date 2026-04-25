#include <iostream>
using namespace std;

// Base class 1
class Camera {
public:
    void takePhoto() {
        cout << "Taking photo with camera..." << endl;
    }
};

// Base class 2
class Phone {
public:
    void makeCall() {
        cout << "Making a phone call..." << endl;
    }
};

// Derived class
class SmartDevice : public Camera, public Phone {
public:
    void useDevice() {
        takePhoto();
        makeCall();
        cout << "Smart device in action!" << endl;
    }
};

int main() {
    SmartDevice sd;
    cout << "Using Smart Device:\n";
    sd.useDevice();
    return 0;
}
