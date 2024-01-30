#include<iostream>
using namespace std;

bool linear_search(int *arr,int n,int x,int i){
    if(arr[i]==x)return true;
    if(i>n-1) return false;
    linear_search(arr,n,x,i+1);


}

int main(){
    int arr[]={1,3,9,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 200;
    int idx = 0;
    bool result = linear_search(arr,n,target,idx);
    if(result==1) cout<<"Found\n";
    else cout<<"Not found\n";
    return 0;
}