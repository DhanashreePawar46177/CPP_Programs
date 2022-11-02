using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Cnt = 0;

        cout << "\n Enter Number For Printing Number Series " << endl;
        cin >> No;

        cout << "\n Natural Number Series =>" << endl;
        for(Cnt = 1; Cnt <= No; Cnt++)
        {
                cout << Cnt << endl;
        }

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
