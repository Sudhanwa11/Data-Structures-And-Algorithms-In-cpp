#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
class Car {
    public:
    string color;
    int noOfGear;
    Car() {
        this->noOfGear = noOfGear;
        this->color = color;
    }
    void printCarInfo() {
        cout << "noOfGear: " << this->noOfGear << endl << "color: " << this->color << endl;
    }
};

class RaceCar: public Car {
    public:
    int maxSpeed;
    RaceCar (int noOfGear, string color, int maxSpeed) {
        this->noOfGear = noOfGear;
        this->color = color;
        this->maxSpeed = maxSpeed;
    }
    void printInfo() {
        cout << "noOfGear: " << noOfGear << endl << "color: " << color << endl << "maxSpeed: " << maxSpeed << endl;
    }
};

int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}
