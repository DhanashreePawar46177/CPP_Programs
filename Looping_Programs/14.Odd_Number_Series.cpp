using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Cnt = 0;

        cout << "\n Enter Positive Integer Number = ";
        cin >> No;

        cout << "\n Odd Number Series => " << endl;
        for(Cnt = 1; Cnt <= No; Cnt++)
        {
            if(Cnt % 2 == 1)
            {
                cout << " " << Cnt << endl;
            }
        }

        cout << "\n Thanks !!!\n" << endl;
        getch();
        return 0;
}
