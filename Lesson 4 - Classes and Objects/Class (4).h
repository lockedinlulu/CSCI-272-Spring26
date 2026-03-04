/*
    Name: Hala Elhanafy
    Course: CSCI 272
    Lesson Number: Lesson 4
    Code Topic: Car Class Output
    Date: 03/03/2026
*/

#include <iostream>
using namespace std;
class Car{
    private:
        string brand{"BMW"};
        string model="M3";
        int year {2026};
        
    public:
    Car(){
     
    }
    ~Car(){
        cout << "Object is destroyed" << endl;
    }
    Car(string b, string m, int y){ 
        brand = b; 
        model = m;
        year = y;
    }
    Car(const Car &other){ 
        
        brand = other.brand;
        model = other.model;
        year = other.year;      
    } 
        void startEngine(){
            cout << "start engine" << endl;
            cout << brand << " " << model << " " << year << " " << endl;
        }
        
        void accelerate(){
            cout << "accelerate engine" << endl;
        }
};

#include "Class.h"

int main(){
    Car car1;
    Car car2("Miata", "Civic", 1999);
    Car car3 (car2); 
    
    Car* pCar1 = new Car; 
    Car* pCar2 = new Car ("Toyota", "Corolla", 2025); 
    
    Car car[20]; 
    
    car2.startEngine();
    car1.startEngine();
    car3.startEngine();
    
    pCar1 -> startEngine(); 
    pCar2 -> startEngine();
    
    car[19].startEngine();
}

 /* Reflection:
What I understood: I understood how I can use a deconstructor, just like a constructor but the opposite, to get rid of my data after it has been compiled. I also 
learned that I can use arrays if I am using several (for example) cars in one class. I also learned that I can override the blueprint in the main, as well as use 
pointers to point to a specific car.

Difficulties: I was really confused in regards to the pointer, I didn't really understand why we needed it at first till  I realized it won't be affected by the decontructor,
and it can also simply just point to the function instead of us constantly calling it.

Research: I went on google and searced up pointer diagrams to freshen up my memory of pointers because it was honestly very confusing for me, and I alsos earched up
arrays and a diagram that shows the difference between constructors and deconstructors in terms of code structure.
    
AI Usage: I did not use AI for this portion of the code.

What I learned: I learned how I can destroy my code after it has been complied and how I can use in that in the real world (for example, with confidential information), and I
also learned that I can use pointers to "call" or basically point to my functions instead of constantly actually calling them.
*/
