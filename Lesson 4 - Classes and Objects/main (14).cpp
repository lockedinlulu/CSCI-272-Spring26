/*
    Name: Hala Elhanafy
    Course: CSCI 272
    Lesson Number: Lesson 4
    Code Topic: Car Class Output
    Date: 03/03/2026
*/

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
