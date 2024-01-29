#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 0;
    return f(n - 1) + (n % 2 == 0 ? (-n) : n);
}

int main()
{
    // observation 1-2+3-4+5-6+7-8....N
   cout<< f(10);
    return 0;
}