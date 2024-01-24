#include<iostream>
using namespace std;
//call by value 
// void swap(int x,int y){
//     int temp = x ; 
//     x=y;
//     y=temp;
// }


void swap(int *x ,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int main(){
int x=10;
int y =20;
int * ptr_x=&x;
int * ptr_y=&y;
swap(ptr_x,ptr_y);
cout<<x<<" "<<y<<endl;


    return 0;
}