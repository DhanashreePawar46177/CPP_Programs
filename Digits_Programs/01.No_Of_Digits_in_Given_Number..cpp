using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, dCnt = 0, Temp = 0;

        Up:
        cout << "\n Enter Number For Count Of Number Of Digits = " << endl;
        cin >> No;

        Temp = No;
        if(Temp <= 0)
        {
            cout << "\n Invalid Number \n Please Enter Valid Number" << endl;
            getch();
            system("cls");
            goto Up;
        }

        while(Temp > 0)
        {
            dCnt++;
            Temp = Temp / 10;
        }

        cout << "\n Number Of Digits in Given Number = " << dCnt << endl;
        cout << "\n Thanks !!\n" << endl;

        getch();
        return 0;
}
