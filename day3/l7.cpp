#include <iostream>

using namespace std ;

int c =45 ;

int main (){

// built in data types

    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b ;
    // // cout<<"Enter the value of c :"<<endl;
    // cout<<"The Sum is : "<<c <<endl;
    // cout<<"The global c is "<<::c;


    float d = 34.4f;
    long double e = 34.4l;

    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e

    <<endl;

    // size of operatore
    cout<<"This size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"This size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"This size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"This size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"This size of 34.4L is "<<sizeof(34.4L)<<endl;



    return 0;
}