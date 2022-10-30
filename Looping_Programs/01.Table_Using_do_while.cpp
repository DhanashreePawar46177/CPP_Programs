using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, i = 0;

        cout << "\n Enter Positive Integer Number For Printing Table = " << endl;
        cin >> No;
        cout << "\n Table of " << No << " =>\n" << endl;

        i = 1;
        do
        {
                cout << " " << No << " * " << i << " = " << No*i << endl;
                i++;
        }while(i <= 10);

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
