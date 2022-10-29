using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, Rev = 0;

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
                Rev = (Rev * 10) + Dig;
                Temp = Temp / 10;
        }
        
        if(No == Rev)
        {
                cout << "\n" << No << " is Palindrome." << endl;
        }
        else
        {
                cout << "\n" << No << " is Not Palindrome." << endl;
        }
        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
