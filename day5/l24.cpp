#include <iostream>

using namespace std ;

int main (){

int age ;

cout <<" Tell Me Your Age"<<endl;
cin>>age;
if (!(age <18)&&(age>0)){
    cout<<"you can not come to my party"<<endl;
}
else if (age ==18){
    cout<<"you are a kid and you will get kid pass to the party"<<endl;
}
else if(age<1) {
    cout<<"you are not yet born"<<endl;
}
else{
    cout<<"your Welcome to Party";
}


return 0;
}