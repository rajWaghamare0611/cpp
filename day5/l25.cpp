#include <iostream>

// Switch case

using namespace std;

int main (){

int age;
cout<<"Tell me your age:"<<endl;
cin>>age;

switch (age)
{
case 18: 
    cout<<"you are 18"<<endl;
    break;
case (1==5):
    cout<<"you are kid now";

default:
    cout<<"No special cases";
    break;
}




    return 0;
}