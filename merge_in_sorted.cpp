#include <iostream>
using namespace std;

void merge_sorted_array(int arr1[], int arr2[], int result[], int m, int n, int s)
{

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }
}
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {1, 5, 10, 15, 20};
    int arr2[] = {2, 6, 12, 18, 24};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int result[m + n];
    int s = m + n;
    
    merge_sorted_array(arr1, arr2, result, m, n, s);
    print_array(result, s);

    return 0;
}