// given an array of intergers prints sum of all subset in it output sum can be printed in any order
// input : arr[] = {2,3}
// output:0,2,3,5
#include <iostream>
#include <vector>
using namespace std;

void f(int *arr, int n, int idx, int sum, vector<int> &v)
{
    if (idx == n)
    {
        v.push_back(sum);
        return;
    }

    f(arr, n, idx + 1, sum + arr[idx], v);
    f(arr, n, idx + 1, sum, v);
}

int main()
{
    int arr[] = {2, 4, 5};
    int sum = 0;
    int idx = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    f(arr, n, idx, sum, v);
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }

    return 0;
}