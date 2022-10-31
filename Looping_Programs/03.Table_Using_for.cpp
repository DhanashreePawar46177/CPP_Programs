using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, i = 0;

        cout << "\n Enter Positive Integer Number For Printing Table = " << endl;
        cin >> No;
        cout << "\n Table Of " << No << " => \n" << endl;

        for(i = 1; i <= 10; i++)
        {
            cout << " " << No << " * " << i << " = " << No*i << endl;
        }

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
