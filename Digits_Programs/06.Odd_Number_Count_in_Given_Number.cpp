using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, oCnt = 0;

        Up:
        cout << "\n Enter a Number = " << endl;
        cin >> No;

        Temp = No;
        if(Temp <= 0)
        {
                cout << "\n Invalid Number. \n Please Enter Positive Integer Number." << endl;
                getch();
                system("cls");
                goto Up;
        }

        while(Temp > 0)
        {
                Dig = Temp % 10;
                Temp = Temp / 10;
                if(Dig % 2 == 1)
                {
                        oCnt++;
                }
        }

        cout << "\n Odd Number Count in " << No << " = " << oCnt << endl;
        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
