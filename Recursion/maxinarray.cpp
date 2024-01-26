#include<iostream>
using namespace std;

int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];
    return max(arr[idx],f(arr,idx+1,n));

}

int main(){
    int arr[]={4,20,8,10,100};
    int n =sizeof(arr)/sizeof(arr[1]);
    cout<<"max of array "<<f(arr,0,n)<<endl;
    return 0;
}