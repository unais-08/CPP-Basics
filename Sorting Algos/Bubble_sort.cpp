#include <iostream>
#include <vector>
using namespace std;
/*Bubble sort:- repeatedly swapping adjucent element if they or not in sorted order or we can say they aren't on their correct position*/
void bubble_sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag++;
            }
        }
        if(flag==0) break;
    }
    return;
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    bubble_sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}