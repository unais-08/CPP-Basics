#include <iostream>
using namespace std;
bool absaluteDiff(int arr[], int size, int target_diff)
{

    int i = 0;
    int j = i + 1;
    int count = 0;
    while (i < size && j < size)
    {
        if (abs(arr[i] - arr[j]) == target_diff)
        {
            return true;
        }
        else if (abs(arr[i] - arr[j]) < target_diff)
        {
            j++;
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
    int target_diff = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool output = absaluteDiff(arr, n, target_diff);

    if (output == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}