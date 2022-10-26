using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, dMult = 0, Temp = 0, Dig = 0;

        Up:
        cout << "\n Enter a Number = " << endl;
        cin >> No;

        dMult = 1;
        Temp = No;
        if(Temp <= 0)
        {
                cout << "\n Invalid Number. \n Enter Positive Integer Number." << endl;
                getch();
                system("cls");
                goto Up;
        }

        while(Temp > 0)
        {
                Dig = Temp % 10;
                dMult = dMult * Dig;
                Temp = Temp / 10;
        }

        cout << "\n Multiplication Of Digits in " << No << " = " << dMult << endl;
        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
