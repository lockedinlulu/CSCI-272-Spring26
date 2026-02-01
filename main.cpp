#include <iostream>
#include <iomanip>
using namespace std;

int double_num(const int num) {
  cout << "value of num before 'num += num' : " << num << endl;
  num += num;
  cout << "value of num after 'num += num' : " << num << endl;

return num + num;
}

int main() { 

int number{10};
  double_num(number);

  cout << "number before calling double_num(number): " << number << endl;
  cout << double_num(number) << endl;
  cout << "Number after calling double_num(number): " << number << endl;
  

// num is a parameter, it doesnt have a value on its own, therefore it copies the value of number. passby value means passing by the value of the copy.
  // number inside the double is an argument, a copy of the argument is created and then passed into the perameter, arguments are usually the value you're passing from the caller (which is main in this case)
  //caller is main calling double-num
// num += num equals num = num + num, and after that, num is being changed in to 20, unlike where num * 2 num remains 10.
  //passbyreference means you aren't making a copy, you are referencing number, because when you make a copy you take up space and that would not be effecient with large data numbers/flies, etc.
//const means you shouldn't change num
//recursion is a function that calls itself, the operating system calls the main, base case is when you reach one (the function no longer calls itself and reaches the final number)
  //factiorial of 5 is 5x4x3x2x1





















  

/*relational, equality, and logical operators

  +, -, *, /,%, >, < , >=, <=

  == (equal to)
  != (not equal to)
  || (or)
  $$ and */

 /* boolalpha for the words true and false

cout << boolalpha;
cout << (3 > 3) << endl;
  must put parenthesis because << has a higher precendence
cout << (5 == 4) << endl;
cout << (5 <= 7.5) << endl;

   0 is false, 1 is true 
 type the third slide 
   4/3 gives us 1 because its an interger so it ignores the decimal
  boolean the results is either true or false

  1) we declare two variables, we put the {0} because we are trying to get the input from the user
  
int num1{0}, num2{0};
  
  cout << "Enter two Numbers: ";
  
  cin >> num1 >> num2;

  display results of comparison*/

/*7cout << num1 << " < " << num2 << " = " << (num1 < num2) << endl;
  cout << "Number 1 > Number 2 = " << (num1 > num2) << endl;
  cout << "Number 1 >= Number 2 = " << (num1 >= num2) << endl;
  cout << "Number 1 <= Number 2 = " << (num1 <= num2) << endl;
  cout << "Number 1 == Number 2 = " << (num1 == num2) << endl;
  cout << "Number 1 != Number 2 = " << (num1 != num2) << endl;
  
cout << endl; << endl;*/

  /*cout << "Logical Operations\n";
  cout << (true && true) << endl;
  int number1{7}, number2{4}, number3{3};
  cout << ((number1 > number2) && (number1 > number3)) << endl;*/

  // study OR truth table (as long as one of them is true the result is true.)

  /* 9/30

    need to know the truth table

    or (&&) always false unless both is true
    and (||) the or its always true unless both is false

    short circut evaluation basically means the computer doesnt check the second part of the code bc if the first part is true/false the answer is automatically true/false depending if its or/and

    decesion making has if and if else
    if = one possible option
  looks like this:
    if (a condition u have to check if true or false){

    if whatever is inside the parenthesis is true whatever is inside the code will be executed

  }

  if else gives you two options, will look like this:
    if (the condition ) {

  if the condition is true this code will work
    
  }
  else {

if the condition is false the else code will work
    
  }*/

  /* cout << "Please Input two numbers: ";

  int num1{0}, num2{0};
  int sum{0};
  sum = num1 + num2;    

  cin >> num1 >> num2;

  if(sum > 0) {

    cout << "The sum of " << num1 << "+ " << num2 << "is greater than zero.";

     float num1{0}, num2{0};

 cout << "Please enter two decimal numbers:";
 cin >> num1 >> num2;
 if(num1 > num2) 
    {
    
    cout << num1 << " is the smaller value.\n";

    }
  
  if(num2 > num1) {
    cout << num2 << " is the smaller value.\n";
  }

  cout << "Do you agree with my answer? Enter y for yes, and n for no. \n";

  char choice{0};

  cin >> choice;

  if (choice == 'y') {

    cout << "You agree!";

  }

  if (choice == 'n') {

    cout << "You disagree."; */

    // = is an assignment operator

/*}

  int year{0};

  cout << "Please input the current year, to check if it is a leap year: ";

  cin >> year;

  if (year % 4 == 0) {

    cout << "This is a leap Year!";
  }
  else {
    cout << "This is NOT a leap year.";
  }
  */

/* if (5 > 4) {

  cout << "Hello\n";

}

  if (6 > 4) {

    cout << "Hi\n";

  }

cout << "\n\n";

  if (5 > 4){

    cout << "Hello\n";

  }
  else if (6 > 4) {

    cout << "Heyo\n";

  }*/

  /*cout << "Please insert a number to check if it is divisble by 5 & 7: ";

  int num{0};

  cin >> num;

  if (num % 5 == 0 && num % 7 ==0) {

    cout << num << " is divisible by 5 & 7\n";
  }
  else {
    cout << num << " is not divisible by 5 & 7";
  }

  int num1{0}, num2{0}, num3{0};

  cout << "Please insert three whole numbers:\n";

  cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3){

    cout << num1 << " is the largest number.\n";

  }
  else if (num2 > num1 && num2 > num3){

    cout << num2 << " is the largest number.\n";

  }
  else{
    cout << num3 << " is the largest number.\n";
  }

  switch (7){
    case 1: cout << "Hi\n";
    break;
    case 2: cout << "Hello\n";
    break;
    case 3: cout << "Howdy\n";
    break;
    case 4: cout << "Hey\n";
    break;
    case 5: cout << "Hi again\n";
    break;
    default: cout << "No match, sorry!\n";
  }

  int month{0};

  cout << "Please input a number from 1-12 to find out which month it is: ";

  cin >> month;

  switch (month) {
    case 1: cout << "January\n";
    break;
    case 2: cout << "Feburary\n";
    break;
    case 3: cout << "March\n";
    break;
    case 4: cout << "April\n";
    break;
    case 5: cout << "May\n";
    break;
    case 6: cout << "June\n";
    break;
    case 7: cout << "July\n";
    break;
    case 8: cout << "August\n";
    break;
    case 9: cout << "September\n";
    break;
    case 10: cout << "October\n";
    break;
    case 11: cout << month << " is November\n";
    break;
    case 12: cout << month << " is December\n";
    break;
    default: cout << "There are only 12 months in a year, no match!\n";
    break;
  }*/



  






  }





  
















  
  

  






























  

