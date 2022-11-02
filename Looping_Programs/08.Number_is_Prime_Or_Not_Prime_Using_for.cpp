using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, i = 0;

        cout << "\n Enter Number For Finding Number is Prime Or Not = " << endl;
        cin >> No;

        for(i = 2; i < No; i++)
        {
                if(No % i == 0)
                {
                    break;
                }
        }
        if(i == No)
        {
            cout << "\n Given Number " << No << " is a Prime Number." << endl;
        }
        else
        {
            cout << "\n Given Number " << No << " is Not Prime Number." << endl;
        }

        cout << "\n Thanks !!!\n" << endl;

        getch();
        return 0;
}

