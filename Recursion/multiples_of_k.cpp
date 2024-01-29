#include <iostream>
using namespace std;

void f(int n , int k){
if(k==0) return ;
f(n,k-1);
cout<<n*k<<" ";


}

int main()
{
    int num = 5;
    int k = 5;
    f(num,k);
    // Iterative approach
    // for (int i = 1; i <= k; i++)
    // {
    //     cout<<i*k<<" ";
    // } 


    return 0;
}