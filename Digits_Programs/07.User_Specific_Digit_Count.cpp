using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, Cnt = 0, f_Dig = 0;

        Up:
        cout << "\n Enter Positive Integer Number = " << endl;
        cin >> No;

        cout << "\n Enter Number For Counting= " << endl;
        cin >> f_Dig;

        Temp = No;
        if(Temp <= 0)
        {
               cout << "\n Invalid Number. \n Please Enter Positive Integer Number.";
               getch();
               system("cls");
               goto Up;
        }

        while(Temp > 0)
        {
                Dig = Temp % 10;
                Temp = Temp / 10;
                if(Dig == f_Dig)
                {
                        Cnt++;
                }
        }
        cout << "\n The Count Of " << f_Dig << " in " << No << " = " << Cnt << endl;
        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
