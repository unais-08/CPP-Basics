#include <iostream>
#include <vector>
using namespace std;
// 5  2  11  12   3
void Insertion_sort(vector<int>&v)
{
    // int n = v.size();
    
    for (int i = 1; i < v.size(); i++)

    {
        int temp = v[i];
        int j = i - 1;
        while (j >= 0 &&  v[j]>temp)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = temp;
    }
}

void printVector(vector<int> v,int n){
      for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    Insertion_sort(v);
    printVector(v,n);
  
    return 0;
}