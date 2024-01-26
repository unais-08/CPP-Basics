#include<iostream>
using namespace std;

void f(int *arr,int n,int index){
if( index==n or index>n) return ;
cout<<arr[index]<<" ";
f(arr,n,index+1);

}

int main(){
    int arr[]={1,3,4,6,55,952,12};
    int n =sizeof(arr)/sizeof(arr[0]);
    f(arr,n,0);
    return 0;
}