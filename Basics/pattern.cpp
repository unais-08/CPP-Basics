#include <iostream>
using namespace std;

void pattern_one(int n);
void pattern_two(int n);
void pattern_three(int n);
void pattern_four(int n);
void pattern_five(int n);
void pattern_six(int n);
void pattern_seven(int n);

int main()
{
    int n;
    cout << "Enter the value for N (rows)" << endl;
    cin >> n;
    // pattern_one(n);
    // pattern_two(n);
    // pattern_three(n);
    // pattern_four(n);
    // pattern_five(n);
    // pattern_six(n);
    // pattern_seven(n);

    return 0;
}

void pattern_one(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_two(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_three(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_four(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern_five(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_six(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_seven(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n-i-1 ; j++)
        {
            cout << " ";
        }
        for (int z = 0; z < 2 * i + 1; z++)
        {
            cout << "*";
        }
        for (int k = 0; k < n-i-1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}