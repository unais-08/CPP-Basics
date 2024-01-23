#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter m and n \n";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the elements \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0;j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}