#include <iostream>
using namespace std;
bool targetSum(int arr[], int size, int target_sum)
{

    int i = 0;
    int j = size - 1;
    int count = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] == target_sum)
        {
            return true;
        }
        else if ((arr[i] + arr[j]) > target_sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 3, 6, 9, 12, 15};
    int target_sum = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool output = targetSum(arr, n, target_sum);

    if (output == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}