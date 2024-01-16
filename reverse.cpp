#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,5,4,50,10,2,351,0,12};
    int end = (sizeof(arr)/sizeof(arr[0]))-1;
    int start=0;
    reverse(arr,start,end);
    for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
}