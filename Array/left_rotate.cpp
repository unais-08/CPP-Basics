#include<iostream>
using namespace std;

void left_rotate_by_one_place(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void print_array(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

int arr[]={3,4,5,6,7,8,9,10};
int size = sizeof(arr)/ sizeof(arr[0]);
left_rotate_by_one_place(arr,size);
print_array(arr,size);

    return 0;
}