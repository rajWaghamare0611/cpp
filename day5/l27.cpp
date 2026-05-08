#include <iostream>

using namespace std ;

int main ()
{


    int choice;
    char grade;

    cout<<"=======SWITCH CASE DEMO========\n";
    cout<<"1.Addition"<<endl;
    cout<<"2.Substraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Divisible\n";
    cout<<"5.Grade Checker\n";
    cout<<"6.Even or Odd\n";
    cout<<"7.Exit\n";

    cout<<"Enter Your Choice : " ;
    cin >> choice;

    switch (choice)
    {
        case 1:
        {

            int a , b;
            cout <<"Enter Two numbers :";
            cin >> a >> b ;
                cout<<"Addition = " << a + b;
                break;
        }
        

        case 2:
        {
            int a , b ;
            cout <<"Enter Two Numbers:";
            cin >> a >> b;

            cout<<"Substraction ="<<a-b;
            break;
        }


        case 3 :
        {
            int a , b ;
            cout <<"Enter Two Numbers:";
            cin >> a >> b ;

            cout<<"Multiplication ="<<a*b;

            break;

        }


        case 4:{

            int a, b ;
            cout << "Enter Two Numbers:";
            cin>>a >> b;

                if (b != 0)
                    cout<< " Divsion = " << a / b ;

                else
                    cout << "Cannot divide by Zero";
                break;

        }

        case 5 :{

            cout<<"Enter Grade (A/B/C/D/F): ";
            cin >> grade ;

                switch (grade)

                {
                    case 'A':
                    cout<<"Excellent";
                    break;

                    case 'B':
                    cout<<"Very Good";
                    break;

                    case 'C':
                    cout<<"Good";
                    break;

                    case 'D' :
                    cout <<"Pass";
                    break;

                    case 'F':
                    cout << "Fail" ;
                    break;

                    default:
                    cout << "Invalid Grade";


                }
                break;
        }


        case 6 :
        {
            int num;
            cout <<"Enter a Number: " ;
            cin >> num;


                switch(num % 2)
                {

                    case 0 :
                    cout<< "Evern Number";
                    break;

                    case 1 :
                    cout << " Odd Number";
                    break;
                }

                break ;
        }

        case 7 :

        cout <<"Program Exited";
        break;

        default:
            cout<<"Invalid Choice";
            break;
    }

return 0 ;

}