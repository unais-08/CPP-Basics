#include <iostream>
using namespace std;

int pow(int p, int q)
{
    if (q == 0)
        return 1;
    return p * pow(p, q - 1);
}

// function for calculating sum of digit with power of digit counts
int f(int n, int digit)
{
    if (n <= 0)
        return 0;
    return pow(n % 10, digit) + f(n / 10, digit);
}

int main()
{
    int n = 123;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    int digit = count;
    int result = f(n, digit);
    if (n == result)
        cout << "yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}