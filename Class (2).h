#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    string carBrand{"Porsche"};
    string carModel{"911"};
    int carYear{2020};
    
    public:
    void startEngine(){
        cout << "Engine has started" << endl;
    }
    void accelerate(){
        cout << "Car is acclerating" << endl;
    }
};