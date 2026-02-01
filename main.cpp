#include <iostream>
using namespace std;

int main(){

  int slices_of_pizza[20]; //for number of students..
  int total_num_slices{0}, pizzas_needed{0};

  for( int i = 0; i < 20; i++){
    cin >> slices_of_pizza[i]; //so student 1 can write how many slices, student 2 and so on
  }


  for(int i = 0; i < slices_of_pizza[0]; i++){
    total_num_slices += slices_of_pizza[i];
  }

  for(int i=0;i < 

} 