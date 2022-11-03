using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Cnt = 0;

        cout << "\n Enter Positive Integer Number = " << endl;
        cin >> No;

        cout << "\n Natural Number Series in Reverse Order =>" << endl;

        for(Cnt = No; Cnt >= 1; Cnt--)
        {
                cout << Cnt << endl;
        }

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
