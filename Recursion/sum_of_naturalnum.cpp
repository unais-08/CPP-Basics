#include<iostream>
using namespace std;

void f(int n){
    if(n<=0) return ;
    f(n-1);
    cout<<n<<" ";


}

int main(){
f(100);

    return 0;
}