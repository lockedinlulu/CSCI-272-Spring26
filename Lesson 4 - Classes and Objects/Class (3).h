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

/* Reflection:
What I understood: I understand how I can use classes as a blueprint for not only objects, but for people as well. I elarned that I can also use if statements
if the output is based on the information stored in the variables. I also learned how I can call a function to cout the code that's already in the class, meaning I don't have
to make a new function before main!

Difficulties: I was a bit confused at the fact that even though in my class I already classified a person, I still had to make person1 for the introduction to work.

Research: I watched some videos on youtube about classes and I actually understood what was confusing me so much because I was able to see the fact that
you simply needed to make person1 because your class also works as a blueprint, so the blueprint always has copies.
    
AI Usage: I did not use AI for this portion of the code.

What I learned: I learned how I can add values in a class and how I can use an if statement to cout specific sentences based on the values that are inserted under my 
class. I also learned that I need to make a variable under my class in main so that I use the function for one person, and then make a second variable
for a second person and so on so fourth.
*/
