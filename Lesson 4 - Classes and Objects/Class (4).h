#include <iostream>
using namespace std;
class Car{
    private:
        string brand{"BMW"};
        string model="M3";
        int year {2026};
        
    public:
    Car(){
        //default constructor
    }
    ~Car(){
        cout << "Object is destroyed" << endl;
    }
    Car(string b, string m, int y){ //paramtereid constructor
        brand = b; //not b = brand b is the value itself
        model = m;
        year = y;
    }
    Car(const Car &other){ // copy constructor
        
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