using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, zCnt = 0, Temp = 0, Dig = 0;

        Up:
        cout << "\n Enter a Number = " << endl;
        cin >> No;

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
                Temp = Temp /10;

                if(Dig == 0)
                {
                        zCnt++;
                }
        }

        cout << "\n Zero Count in " << No << " = " << zCnt << endl;
        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
