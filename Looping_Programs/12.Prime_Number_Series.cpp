using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Cnt  = 0, T_Cnt = 0;

        cout << "\n Enter Positive Integer Number For Printing Prime Number Series = ";
        cin >> No;

        cout << "\n Prime Number Series =>" << endl;
        for(Cnt = 2; Cnt <= No; Cnt++)
        {
                for(T_Cnt = 2; T_Cnt <= Cnt ; T_Cnt++)
                {
                    if(Cnt % T_Cnt == 0)
                    {
                        break;
                    }
                }
                if(Cnt == T_Cnt)
                {
                    cout << "\t" << Cnt << endl;
                }
        }

        cout << "\n Thanks !!!\n" << endl;
        getch();
        return 0;
}
