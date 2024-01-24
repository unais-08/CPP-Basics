#include<iostream>
using namespace std;

int main(){

    int x = 10;
    float y=9.8;
    int *ptr=&x;
    float *ptrf=&y;


    cout<<"The address stored in ptr is "<<ptr<<endl;
    cout<<"ptr stored add of x {" <<ptr<<"}"<<" and value at this address is " <<*ptr<<endl;
    cout<<"The address stored in ptr is "<<ptrf<<endl;
    cout<<"ptr stored add of y {" <<ptrf<<"}"<<" and value at this address is " <<*ptrf<<endl;

    *ptr=20;
    cout<<"new value of x = "<<x<<endl;
    cout<<"defrence x "<<*ptr<<endl;
    int new_value_x=*ptr;
    cout<<new_value_x;  //stored in another variable

    // ptr = 90; error: because we cannot store value in pointer varibale it's only able to store addresses of variable
    // cout<<&y<<endl;

    return 0;
}