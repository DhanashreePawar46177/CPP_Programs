using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, i = 0;

        cout << "\n Enter Positive Integer Number For Printing Square = " << endl;
        cin >> No;
        cout << "\n Square Of " << No << " => \n" << endl;

        for(i = 1; i <= No; i++)
        {
            cout << " " << i << " * " << i << " = " << i*i << endl;
        }

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
