#include <iostream>
using namespace std;

int main() {

//variables also have memory adresses, the address of the variable in the memory (where exactly is it stored in your RAM)
  //a pointer is a special type of variable to store addresses

  int num{10};

  cout << "address of num: " << &num << endl;

  //hexadecimals are numbers from 0-9 and letters from A-F
  //in hexadecimals A = 10
  //binary is from 0-1
  //decimals are from 0-9
  
int *num_pointer{&num};

  //include * before name of variable because it is not an ordinary variable
  //when the * is between a variable type and the name of the variable that means it is a pointer

  cout << "address of num, using num_pointer: " << num_pointer << endl;

  double num2{4.6789};

  double *num2_pointer{&num2};

  cout << "address of num2 using pointer: " << num2_pointer << endl;

  int number{10};
  int *number_pointer{&number};

  cout << "number: " << number << endl;
  cout << "number, using number_pointer: " << *number_pointer << endl;

  //use * to indirectly reference 10 (this process is called dereferencing)







  
}