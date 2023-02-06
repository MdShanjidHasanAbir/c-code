#include<iostream>
using namespace std;
int main(){
int Arr_1[3][3]={};
int Arr_2[3][3]={};
int Arr_mul[3][3]={};
cout<< "Enter 1st matrix="<<endl;
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cin>> Arr_1[i][j];
        }
}
cout<< "Enter 2nd matrix ="<<endl;
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cin>> Arr_2[i][j];
        }
}
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                Arr_mul[i][j]=0;

        for(int k=0;k<3;k++){
             Arr_mul[i][j]= Arr_mul[i][j]+Arr_1[i][k]*Arr_2[k][j];
        }
        }
}
cout<< "Multiplication of 1st & 2nd matrix:"<<endl;
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
cout<<Arr_mul[i][j]<<" ";
       }
       cout<<endl;
       }
return 0;
}
