#include <iostream>

using namespace std;

#include <stdlib.h>

int main ()

{
    double D1, D2 , D3 (0);
    char	Operator;
    const bool T(true), F(false);

    do
    {
        cout <<"\nEnter the first number:";
        cin>>D1;
        cout << "\nPlease enter an operator (+ - * / or type X to exit or C to restart): "<< endl;
        cin >> Operator;
    } while (Operator == 'C');

    while(!F)
    {
        switch (Operator)
        {
        case '+' :
            cout<<"Enter second number : ";
            cin>>D2;
            D3=D1+D2;
            cout<< D1<< " + " << D2 << " = " << D3 << endl;
            T;
            break;

        case '-':
            cout<<"Enter second number : ";
            cin>>D2;
            D3=D1-D2;
            cout<< D1<< " - " << D1 << " = " << D3 << endl;
            T;
            break;

        case '*':
            cout<<"Enter second number : ";
            cin>>D2;
            D3=D1*D2;
            cout<< D1<< " * " << D2 << " = " << D3 << endl;

            T;
            break;

        case'/':
            cout<<"Enter second number : ";
            cin>>D2;
            if ( D2==0)
            {
                cout << "Undefined answer(s). Enter new divisor.." << endl;
                cin >> D2;
            }
            else D3= D1/D2;
            cout << D1 << " / " << D2 << " = " << D3 << endl;
            T;
            break;

        case 'C':
        case 'c':
            D1=0;
            cout << " Enter first number ";
            cin>>D1;
            T;
            break;
        case 'X' :
        case 'x' :
            T;
            exit (0) ;
            break;
        default:
            F;
            cout << "Invalid response " << Operator << " - Please enter a valid operation - Enter X to quit or enter C to clear" << endl;

        }
        D1=D3;
        cout << "Enter new operator" << endl;
    }
}
