#include<iostream>
using namespace std;
int main(){
int Arr_1[5][4]={{12,5,8,10},{6,7,4,11},{18,9,2,1},{20,3,15,13},{30,21,35,23}};
int Arr_Tr[4][5]={};

for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
          Arr_Tr[j][i]= Arr_1[i][j];
        }
}
for(int j=0;j<4;j++){
        for(int i=0;i<5;i++)
        {
       cout<<Arr_Tr[j][i]<<" ";

       }
       cout<<endl;
       }

return 0;
}
