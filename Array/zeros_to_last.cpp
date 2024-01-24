#include<iostream>
using namespace std;

void shift_zero(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i = j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }
        cout<<endl;
}

int main(){

int arr[]={1,0,8,0,4,5,0,0,10,1,3};
int size = sizeof(arr)/sizeof(arr[0]);
shift_zero(arr,size);
print_arr(arr,size);
    return 0;
}