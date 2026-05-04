#include <iostream>
using namespace std;

int main (){
    int a=4,b=5;
    cout<<"operaters in C++:"<<endl;
    cout<<"Following are the types of operaters in C++:"<<endl;
    //ARTHMATICOPERATPRES
    cout<<"the value of a+b is :" <<a+b <<endl;
    cout<<"the value of a-b is :" <<a-b <<endl;
    cout<<"the vlue of a*b is :" <<a*b <<endl;
    cout <<"the value of a/b is :" <<a/b <<endl;
     cout <<"the value of a%b is :" <<a%b <<endl;
    cout <<"the value of a++ is :" <<a++ <<endl;
    cout <<"the value of a-- is :" <<a-- <<endl;
    cout <<"the value of ++a is :" <<++a <<endl;
    cout <<"the value of --a is :" <<--a <<endl;

    cout <<endl;

    // comparison  operators
    cout<<"the value of a == b is" <<(a==b) <<endl;
    cout<<"the value of a != b is" <<(a!=b) <<endl;
    cout<<"the value of a > b is" <<(a==b) <<endl;
    cout<<"the value of a > b is" <<(a==b) <<endl;
    cout<<"the value of a => b is" <<(a==b) <<endl;
    cout<<"the value of a >= b is" <<(a==b) <<endl;

    cout <<endl;


    // Logical Operators
    cout <<"Followings are the Logical operators in C++"<<endl;
    cout<<"the value of this && END  Logical operator is:  " <<((a==b)&&(a<b)) ;
    
    cout<<endl;

   cout <<"the value of thi || OR Logical operator is : " << ((a==b)||(a<b)) ;

   cout <<"the value of thi ! NOT Logical operator is : " << (!(a==b)) ;



     return 0;
}