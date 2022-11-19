using namespace std;
#include<conio.h>
#include<iostream>

int main()
{
        int Num = 0, Fact = 0, Temp = 0;

        cout << "\n\n Enter Positive Integer Number For Finding Factorial = ";
        cin >> Num;

        for(Fact = 1, Temp = Num; Temp > 1; Temp--)
        {
                Fact = Fact * Temp;
        }
        cout << "\n Factorial Of " << Num << " = " << Fact << endl;

        cout << "\n Thanks !!!" << endl;
        getch();
        return 0;
}

