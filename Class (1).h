#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    string carBrand;
    string carModel;
    int carYear;
    
    public:
    void startEngine(){
        cout << "Engine has started" << endl;
    }
    void accelerate(){
        cout << "Car is acclerating" << endl;
    }
};