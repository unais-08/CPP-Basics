#include<iostream>
using namespace std;
int main(){
    void *ptr;
    int x =10;
    float y =20.3;

    ptr = &x;
    int * ptr2 = (int *) ptr;
    cout<<ptr<<" "<<ptr2<<" "<<(*ptr2)<<endl;

    return 0;
}