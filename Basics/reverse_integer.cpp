#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n = 123;
    int remainder;
    int ans = 0;
    while (n != 0)
    {
        remainder = n % 10;         // get last digit
        ans = ans * 10 + remainder; 
        n /= 10;
    }
    string str = to_string(ans);
    
        // cout << ans << " ";
    return 0;
}