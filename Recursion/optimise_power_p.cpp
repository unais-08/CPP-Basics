#include<iostream>
using namespace std;

int f(int p , int q){

    if(q==1)return p;
    if(q%2!=0){
        return p*f(p,(q-1)/2);
    }else{
        return p*f(p,q/2);//  
    }
}


int main(){
int result = f(2,6);
cout<<result<<endl;


    return 0;
}