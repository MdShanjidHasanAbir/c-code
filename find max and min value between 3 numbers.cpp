//define two function to print maximum & minimum number respectivly among three numbers entered by the user.
#include<iostream>
using namespace std;
int x,y,z;
void getMaximum()
{
if (x>y)
{
    cout<<"maximum number is :"<<x<<endl;
}
else if(y>z)
{
    cout<<"maximum number is :"<<y<<endl;

}
else{
    cout<<"maximum number is :"<<z<<endl;
}
}
void getMinimum()
{
if ( x<y)
{
    cout<<"Minimum number is :"<<x<<endl;

}
else if(y<z)
{
    cout<<"Minimum number is :"<<y<<endl;
}
else
{
    cout<<"Minimum number is :"<<z<<endl;
}
}
int main()
{
    cout <<"Enter three number :";
    cin>>x>>y>>z;
    getMaximum();
    getMinimum();

    return 0;
}
