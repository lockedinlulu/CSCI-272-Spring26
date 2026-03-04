/*
    Name: Hala Elhanafy
    Course: CSCI 272
    Lesson Number: Lesson 4
    Code Topic: Car Class
    Date: 03/03/2026
*/

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
