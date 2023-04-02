using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class Stud
{
        public :
                    int  R_No, Phy, Chem, Maths;

                    char Name[20];

                    Stud();

                    Stud(int No, int P, int C, int M, char Nm[]);

                    Stud(Stud &);

                    void Accept_Student_Details();

                    void Display_Student_Details();

                    ~Stud();

        private :
                    int Tot;
                    float Per;
                    void Calculate_Result();
};

Stud :: Stud()
{
                cout << endl << "\n Inside Default Constructor !!!" << endl;

                R_No = Phy = Chem = Maths = Tot = 0;
                Per = 0.0;
}

Stud :: Stud(int No, int P, int C, int M, char Nm[])
{
                cout << endl << "\n Inside Parameterized Constructor !!!" << endl;

                R_No = No; Phy = P; Chem = C; Maths = M;
                strcpy(Name, Nm);

                Calculate_Result();
}

Stud :: Stud(Stud &tmp)
{
                cout << endl << "\n Inside Copy Constructor !!!" << endl;

                R_No = tmp.R_No;
                Phy = tmp.Phy;
                Chem = tmp.Chem;
                Maths = tmp.Maths;
                Tot = tmp.Tot;
                Per = tmp.Per;
                strcpy(Name, tmp.Name);
}

void  Stud :: Accept_Student_Details()
{
                cout << "\n\n Enter Student Details => ";

                cout<< "\n\t Enter Roll No = ";
                cin >> R_No;
                fflush(stdin);
                cout << "\n\t Enter Name = ";
                gets(Name);
                cout << "\n\t Enter Physics Marks = ";
                cin >> Phy;
                cout << "\n\t Enter Chemistry Marks = ";
                cin >> Chem;
                cout << "\n\t Enter Maths Marks = ";
                cin >> Maths;

                Calculate_Result();
}

void Stud :: Display_Student_Details()
{
                cout << "\n\n ==============*****=============== \n";
                cout << "\n Details Of Students Are => ";

                cout << "\n\n\t Roll Number   = " << R_No;
                cout << "\n\t Student Name    = " << Name;
                cout << "\n\t Physics Marks   = " << Phy;
                cout << "\n\t Chemistry Marks = " << Chem;
                cout << "\n\t Maths Marks     = " << Maths;
                cout << "\n\t Total Marks     = " << Tot;
                cout << "\n\t Percentage      = " << Per;

                cout << "\n\n ==============*****=============== \n";
}

void Stud :: Calculate_Result()
{
            Tot = Phy + Chem + Maths;

            Per = ((float)(Tot)) / 3;
}

Stud :: ~Stud()
{
                cout<<endl<<" Inside Destructor of Our Stud Class!!!"<< Per << endl;
}

int main()
{
                Stud Std1;

                Std1.Accept_Student_Details();
                Std1.Display_Student_Details();

                getch();

                Stud Std2(21, 65, 78, 64, "Amey wagh");

                Std2.Display_Student_Details();

                getch();

                Stud Std3(Std1);            /// Call To Copy Const

                cout<< "\n Display By Copied Object => \n";

                Std3.Display_Student_Details();

                getch();
                return 0;
}
