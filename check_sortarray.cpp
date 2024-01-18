#include<iostream>
using namespace std;
int check_array_sort(int n , int arr[]){
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return 1;   //unsorted
        }
    }
    return 0;   //sorted
}
int main(){
int arr[]={1,2,3,4,5,6,7,10};
int size=sizeof(arr)/sizeof(arr[0]);
int ans = check_array_sort(size,arr); 
cout<<ans<<endl;
    return 0;
}