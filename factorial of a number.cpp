//factorial of a number....
#include<iostream>
#include<conio.h>
using namespace std;
void factorial(void)
{
system("CLS");
int num,factorial=1;
cout<<"Enter the number = ";
cin>>num ;
if(num<0)
cout<<"Math erorr";
else if (num<1)
cout<<"The factorial of  ("<<num<<"!)   ="<<num;
else if (num<=1)
cout<<"The factorial of  ("<<num<<"!)   ="<<factorial;
else
{
for(int x= num; x >= 2; x--)
{
factorial=factorial*x;
}
cout<<"The factorial of  ("<< num <<"!)  ="<<factorial;
}
}
int main()
{
    factorial();
    getch();
}
