#include<iostream>
using namespace std;

int main(){

    int x;
    int *ptr_x=&x;
    cout<<sizeof(x)<<endl;
    cout<<ptr_x<<" "<<(ptr_x+1)<<" "<<(ptr_x+2)<<" "<<(ptr_x+3)<<endl;
    double y;
    cout<<sizeof(y);
    return 0;
}