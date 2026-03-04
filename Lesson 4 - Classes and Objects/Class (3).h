/*
    Name: Hala Elhanafy
    Course: CSCI 272
    Lesson Number: Lesson 4
    Code Topic: Person Class
    Date: 03/03/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name{"Hala"};
    int age{21};
    char gender{'F'};
    
    void intro(){
    cout << "Hello my name is " << name << ", I am " << age << " years old.";
    
    if (gender == 'M'){
        cout << " I am a male" << endl;
    }
    else if (gender == 'F'){
        cout << " I am a female" << endl;
    }
    else{
        cout << "No gender chosen." << endl;
    }
    
    }
};

#include "Class.h"

int main(){
    Person person1;
    person1.intro();
}
