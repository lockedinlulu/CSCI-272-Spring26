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

#include "Class.h"

int main(){
    Car car1;
    car1.startEngine();
    car1.accelerate();
}

/* Reflection:
What I understood: I understood how to make a very basic class using a car as a example. Since a class is a blueprint, we use things that ever single car has, so that
includes brand, year, and model. I also understand how we can make the classes form specific things using functions.

Difficulties: I couldn't really understand how exactly the complier was able to output what the car was doing because it didn't make since to me since there was nothing in the
parameters, but it made sense when I realized we simply called the function which was storing the cout.

Research: I searched up some more examples that involved the data doing things, such as cars or accounts. Once again I watched YouTube videos to help me understand what was going
on better, because I could see it for myself and play around with the code as well.
    
AI Usage:
I did not use AI for this portion of the code.

What I learned: I learned how to make my own class and how to put functions in my class that output what the class is doing. I also elarned that we can add functions
in our class to show the complier and make it output what the function is doing. I also learned that we can assign values to classes.
*/
