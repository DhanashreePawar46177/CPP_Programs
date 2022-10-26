using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, dSum = 0, Temp = 0, Dig = 0;

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
                dSum = dSum + Dig;
                Temp = Temp / 10;
        }

        cout << "\n Sum Of Digits in Given Number = " << dSum << endl;

        cout << "\n Thanks !!!\n" << endl;
        getch();
        return 0;
}
