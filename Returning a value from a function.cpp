//define a function that returns the product of two numbers entered by the user
#include<iostream>
#include<conio.h>
using namespace std;
float x,y;
float multiplication( )
{

     float mult = x*y;
   return mult;
}
int main ()
{

     cout<<"enter 1st number:";
    cin>> x;
    cout<< "enter 2nd number:";
    cin>>y;

    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    float result = multiplication();
    cout<<"product is="<<multiplication( );

    getch();
}
