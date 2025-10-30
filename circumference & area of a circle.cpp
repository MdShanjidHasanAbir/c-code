//Write a program to print the circumference and area of a circle of redius entered by the user by defining own function.
#include<iostream>
#include<conio.h>
using namespace std;
float x,area,circum;
void getArea( )
{

     float area = 3.1416*x*x;
     cout<<"Area of the circle is="<< area<<endl;

}
void getCircumference()
{
     float circum=2*3.1416*x;
     cout<<" Circumference of the circle is ="<<circum;
}
int main ()
{

    cout<<"enter the redius:";
    cin>> x;


    cout<<" redius,r ="<<x<<endl;
    getArea();
    getCircumference();


    getch();
}
