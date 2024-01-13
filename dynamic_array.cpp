#include<iostream>
using namespace std;
int main(){

int *ptr_x=new int[5];
int *ptr_y=new int[10];
ptr_x[0]=100;
ptr_x[1]=200;
ptr_x[2]=300;
ptr_x[3]=400;
ptr_x[4]=500;
for (int i = 0; i < 5; i++)
{
    // cout<<ptr_x[i]<<" ";
    ptr_y[i]=ptr_x[i];
    cout<<ptr_y[i]<<" ";

}

delete []ptr_x;
ptr_y=NULL;
for (int i = 0; i < 5; i++)
{
    // cout<<ptr_x[i]<<" ";
    // ptr_y[i]=ptr_x[i];
    cout<<ptr_y[i]<<" ";

}

    return 0;
}