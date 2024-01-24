#include <iostream>
using namespace std;
int main()
{

    int x, y;
    cout << "enter number" << endl;
    cin >> x >> y;
    int result;
    int *ptr_x = &x;
    int *ptr_y = &y;
    int *ptr_result = &result;
    *ptr_result = (*ptr_x) + (*ptr_y);
    cout << result << endl;
    return 0;
}