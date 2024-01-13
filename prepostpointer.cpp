#include<iostream>
using namespace std;
int main(){

int arr[]={10,2,3};

int *ptr=&arr[0];
cout<<ptr<<" "<<*ptr<<"\n";
// cout<<ptr++<<" "<<*ptr<<"\n";
// cout<<ptr<<" "<<*ptr<<endl;
*ptr++;
cout<<*ptr;
    return 0;
}