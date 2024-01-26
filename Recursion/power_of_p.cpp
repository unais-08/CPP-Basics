#include<iostream>
using namespace std;

int f(int p,int q){
    if(q==0) return 1;
    int result=p*f(p,q-1);
    return result;
}

int main(){
    cout<<f(2,3);
    cout<<endl;

    return 0;
}