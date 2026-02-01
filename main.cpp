#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include "printline"
using namespace std;

/*void addFunc( int a , int b){
    cout << a + b << endl;
}
void subtractFunc( int a , int b){
    cout << a - b << endl;
    
    }*/

int main() { 

/*cout << "Welcome! Please input your account number: ";
  int acc{0}, pin{0};
  int accnumdb{123456789}, pinnumdb{1122};
  cin >> acc;
  cout << "Great, now please input your pin number: ";
  cin >> pin;

if (accnumdb == 123456789){
if (pinnumdb == 1122){
cout << "Login successful!\n";
  cout << "\n==============Account Details=================\n";
  cout << "1. Balance\n";
  cout << "2. Inquiry\n";
  cout << "3. Withdraw\n";
  cout << "4. Deposit\n";
  cout << "5. Exit\n";

  char choice {0};

  cout << "Please select a menu option. ('B' for balance, 'W' for withdraw, 'I' for inquiry, 'D' for deposit, 'E' for exit: ";

  cin >> choice;

  switch(choice) {
    case 'B' : case 'b': cout << "Your balance is $1,209,504.89\n";
    break;

    case 'W' : case 'w': cout << "You withdrew $250,049.21\n";
    break;

    case 'I' : case 'i': cout << "Call us on (123) 456-798\n";
    break;

    case 'D' : case 'd': cout << "Your deposit amount is $586,589.03\n";
    break;

    case 'E' : case 'e': cout << "Goodbye, enjoy your day!\n";
    break;

    default: cout << "Invalid selection. Try again.\n";
  }

}
}
  else{
cout << "\nInvalid account or PIN number.\n";
  }

  

  
  
 /*cout << "\n Compound Assignment\n";

  int x{5};

  cout << "old value of x: " << x << endl;
  x += 4;
  cout << "new value of x after +=: " << x << endl;

  x -= 5;
  cout << "new value of x after -=: " << x << endl;

  x *= 2;
  cout << "mew value of x after *=: " << x << endl;

  x /= 3;
  cout << "new value of x after /=: " << x << endl;

  x %= 2;
  cout << "new value of x after %=: " << x << endl;*/

    

/*int counter{1}, stopnum{0};

  cout << "Please enter the stop number: ";
  cin >> stopnum;
  
  while (counter <= stopnum){
    cout << counter << endl;
    ++counter;
  }*/

  /*cout << "Welcome! Please input your account number: ";
      int acc{0}, pin{0};
      int accnumdb{123456789}, pinnumdb{1122};
      cin >> acc;

      cout << "Great, now please input your pin number: ";
      cin >> pin;*/

      // Check if account and pin match
      /*if (acc == accnumdb && pin == pinnumdb) {
          cout << "Login successful!\n";

          char choice {' '};*/ // initialize with space so it's not 'E' at start

          // Loop until user chooses to exit
          /*while (choice != 'E' && choice != 'e') {

              cout << "\n============== Account Details ================\n";
              cout << "1. Balance\n";
              cout << "2. Inquiry\n";
              cout << "3. Withdraw\n";
              cout << "4. Deposit\n";
              cout << "5. Exit\n";

              cout << "Please select a menu option "
                   << "('B' for balance, 'W' for withdraw, "
                   << "'I' for inquiry, 'D' for deposit, 'E' for exit): ";

              cin >> choice;

              if (choice == 'B' || choice == 'b') {
                  cout << "Your balance is $1,209,504.89\n";
              }
              else if (choice == 'W' || choice == 'w') {
                  cout << "You withdrew $250,049.21\n";
              }
              else if (choice == 'I' || choice == 'i') {
                  cout << "Call us on (123) 456-798\n";
              }
              else if (choice == 'D' || choice == 'd') {
                  cout << "Your deposit amount is $586,589.03\n";
              }
              else if (choice == 'E' || choice == 'e') {
                  cout << "Goodbye, enjoy your day!\n";
              }
              else {
                  cout << "Invalid selection. Try again.\n";
              }
          }

      } else {
          cout << "\nInvalid account or PIN number.\n";
      }

      return 0;*/

// functions are a way to split your code into different pieces

    /*float x{5.7}, y{5.2};
    
    cout << "Ceiling of " << x << " = " << ceil(x) << endl;
    cout << "Ceiling of " << y << " = " << ceil(y) << endl;

    cout << "Floor of " << x << " = " << floor(x) << endl;
    cout << "Floor of " << y << " = " << floor(y) << endl;

    cout << "2 to the power of 3 = " << pow(2, 3) << endl;

    srand(time(0));

    cout << "\n10 random numbers between 3 and 7: ";
    for(int i{1}; i <= 10; ++i){
        cout << 3 + rand( ) % 5 << " ";
    }
    cout << endl;*/


    // factorial is product of all numbers till the num
//for (intitalization;condition;increment/decrement)
    // start @ 1, goes up until num, ++ so the loop becomes false.
    //i is a counter, keeps track of how many loops happened

   /*cout << "enter the first number: ";
    int num1{0};
    cin >> num1;
    cout << "great now enter the last number: ";
        int num2{0}, prod{1};
    cin >> num2;

    for(int i{num1 + 1}; i < num2; ++i){
        if(i % 2 == 0){
            cout << i << " " << endl;
        prod *= i;
        }
    }
    
cout << "The product of even numbers between " << num1 << " and " << num2 << " is " << prod;*/

    //outer loops controls the rows
    //inner loop controls how many stars per row 
    
    /*int skip{0};
    for(int i = 1; i <= 10; i++){
        if( i == 5){

            skip = i;
            continue;

        }

    cout << i << " " << endl;

    }*/


cout << rand() << endl;

    cout << rand() % 16 << endl; // 16 is the scaling value

    for(int i{1}; i <=10; ++i){
    cout << 1 +rand() % 16 << endl; //1 is a shift value
    }

    //rand() generates random numbers between 0 and randmax, but if we wanted to start from 3
    //5 + rand()

    cout << ceil(10.5) << endl; //gives you next integer higher than 10.5
    cout << floor(5.6) << endl; //gives you next integer lower than 5.6

    cout << "John Thomas\n";
    print_divider_line();
    
    cout << "25\n";
    print_divider_line();
    
    cout << "jthomas@amazon.com\n";
    print_divider_line();

    


    
    






    
        }
