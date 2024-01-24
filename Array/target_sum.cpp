#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 3, 5, 7, 10};
    int target_sum = 17;
    int count = 0;
    // int size = sizeof(array) / sizeof(array[0]);
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i] + array[j] == target_sum)
            {
                // cout<<array[i]<<" "<<array[j];
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}