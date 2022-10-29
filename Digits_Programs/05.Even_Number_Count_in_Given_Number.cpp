using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, eCnt = 0;

        cout << "\n Enter a Number = " << endl;
        cin >> No;

        Temp = No;
        while(Temp > 0)
        {
                Dig = Temp % 10;
                if(Dig % 2 == 0 && Dig != 0)
                {
                    eCnt++;
                }
                Temp = Temp / 10;
        }


        cout << "\n Even Count in " << No << " = " << eCnt << endl;
        cout <<"\n Thanks !!!\n" << endl;

        getch();
        return 0;
}
