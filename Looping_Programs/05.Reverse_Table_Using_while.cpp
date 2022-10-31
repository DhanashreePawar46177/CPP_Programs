using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, i = 0;

        cout << "\n Enter Positive Integer Number For Printing Reverse Table = " << endl;
        cin >> No;
        cout << "\n Reverse Table Of " << No << " => \n" << endl;

        i = 10;
        while(i >= 1)
        {
            cout << " " << No << " * " << i << " = " << No*i << endl;
            i--;
        }

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}

