/*
Question No 01:- Given an interger array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in place without making acopy of the array.

input:
 0 5 0 3 42

output:
 5 3 42 0 0
*/
#include <iostream>
#include <vector>
using namespace std;
// 3 0 2 0 1 5
// 3 2 0 0 1 5
// 3 2 0 1 0 5
// 3 2 0 1 5 0
void sort_zero(vector<int> &v)
{
    int n = v.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag =false;
        while (j != i)
        {
            if (v[j] == 0 &&  v[j + 1]!=0)
            {
                swap(v[j], v[j + 1]);
               
                flag  =true;
            }
             j++;
        }
        if(!flag)break;
    }
    return;
}

void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {0,3, 0, 5, 0, 5};
    print_vector(v);
    sort_zero(v);
    print_vector(v);
    return 0;
}