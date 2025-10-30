//Print the multiplication table using function.
#include<iostream>
#include<conio.h>
using namespace std;
int n;
void Multiplication()
{

    for (int i=1;i<=10;i++)


       {


            cout << n << " * " << i << " = " << n * i << endl;
       }
}
int main()
{

    cout<<"Enter an integer number for multiplication table :";
    cin >>n;
    Multiplication ();
    getch();
}
