#include <iostream>
#include <iomanip>

using namespace std ;

//Manipulator in C++

int main (){

      int a =2 , b=53 , c= 1236 ;

      cout<<"The value is a without setw is :"<<a <<endl;
      cout<<"The value is b without setw is : "<<b <<endl;
      cout<<"thw value is c without set is : "<<b <<endl;

      cout<<"the value is with setw is :"<<setw(4)<<a<<endl;
      cout<<"the value is with setw is :"<<setw(4)<<b<<endl;
      cout<<"the value is with setw is :"<<setw(4)<<c<<endl;


    return 0;
}