#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> v)
{
    // cout << "vector size is " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    cout<<"enter the value of n (size for vector)"<<endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> v1(10);
    vector<int> v2(10, 2);
    vector<int> v3 = {11, 35, 5, 3};
    vector<int> v4 = v3; // copy vector syntax 1
    vector<int> v5(v);   // copy vector syntax 2

    print_vector(v);
    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    print_vector(v5);
    cout<<endl;
    cout<<"###### Poping element ###### "<<endl;
    /*  Poping element*/
    v.pop_back();
    v3.pop_back();
    print_vector(v);
    print_vector(v3);

    return 0;
}
