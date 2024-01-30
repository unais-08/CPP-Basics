#include <iostream>
using namespace std;

int f(int *h, int n, int i)
{
    if (i == n - 1)
        return 0;
    int opt_1 = f(h, n, i + 1) + abs(h[i] - h[i + 1]);
    if (i == n - 2)
        return opt_1;
    int opt_2 = f(h, n, i + 2) + abs(h[i] - h[i + 2]);
    return min(opt_1, opt_2);
}

int main()
{
    int height_array[] = {10, 10, 10, 10};
    int n = sizeof(height_array) / sizeof(height_array[0]);
    int result = f(height_array, n, 0);
    cout << result << "\n";
    return 0;
}