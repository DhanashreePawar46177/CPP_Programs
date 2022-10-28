using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Z_Cnt = 0, E_Cnt = 0, O_Cnt = 0, Dig = 0;

        Up:
        cout << "\n Enter Positive Integer Number = " << endl;
        cin >> No;

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
                if(Dig == 0)
                {
                        Z_Cnt++;
                }
                else if(Dig % 2 == 0)
                {
                        E_Cnt++;
                }
                else
                {
                        O_Cnt++;
                }
        }

        cout << "\n Count Of Zero Count in " << No << " = " << Z_Cnt << endl;
        cout << "\n Count Of Even Count in " << No << " = " << E_Cnt << endl;
        cout << "\n Count Of Odd Count in " << No << " = " << O_Cnt << endl;

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
