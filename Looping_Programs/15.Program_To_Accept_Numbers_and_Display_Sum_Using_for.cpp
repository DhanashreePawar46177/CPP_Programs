using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
         int Num = 0, Cnt = 0, Sum = 0, No = 0;

         cout << "\n\t How Many Numbers Do You Have TO Calculate Sum = ";
         cin >> No;

         cout << "\n\t Enter " << No << " Numbers => " << endl;

         for(Cnt = 1 ; Cnt <= No ; Cnt++)
         {
             cout << "\n\t Enter Number " << Cnt << " = ";
             cin >> Num;
             Sum = Sum + Num;
         }

         getch();
         system("cls");

         cout << "\n\t Addition Of " << No << " Numbers = " << Sum << endl;
         cout << "\n\n\t\t Thanks !!!" << endl;

         getch();
         return 0;
}
