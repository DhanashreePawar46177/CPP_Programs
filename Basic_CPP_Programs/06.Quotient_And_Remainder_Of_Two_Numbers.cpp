using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0, Quo = 0, Rem = 0;

        cout << "\n Enter 1st Number For Calculate Quotient and Remainder = " << endl;
        cin >> Num1;

        cout << "\n Enter 2nd Number For Calculate Quotient and Remainder = " << endl;
        cin >> Num2;

        Quo = Num1 / Num2;
        Rem = Num1 % Num2;

        cout << "\n Quotient Of " << Num1 << " and " << Num2 << " = " << Quo << endl;
        cout << "\n Remainder Of " << Num1 << " and " << Num2 << " = " <<Rem << endl;

        cout << "\n Thanks !!!\n" <<endl;

        getch();
        return 0;
}
