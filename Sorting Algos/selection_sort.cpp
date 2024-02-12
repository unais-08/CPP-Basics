#include <iostream>
#include <vector>
using namespace std;
// selection sort : Repeatedly find minimum element in unsorted array , place it at starting position until array is sorted
void selection_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            // minimum element
            if (v[j] < v[min_idx])
            {
                min_idx = j;
            }
        }
        if (i != min_idx)
        {
            swap(v[i], v[min_idx]);
        }
    }
    return;
}
int main()
{
    vector<int> v = {4, 5, 1, 2, 10, 2};
    int n = v.size();
    selection_sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}