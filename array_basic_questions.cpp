
#include <iostream>
using namespace std;
void sum_of_arr_elements();
void largest_element_in_array();
void linear_search();
int main()
{
    // largest_element_in_array();
    // sum_of_arr_elements();
    // linear_search();

    return 0;
}

void sum_of_arr_elements()
{
    int array[] = {30, 60, 60, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << sum;
}

void largest_element_in_array()
{
    int array[] = {30, 60, 50, 100, 20, 250};
    int max = array[0];
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= max)
        {
            max = array[i];
        }
    }
    cout << max << endl;
}
void linear_search(){
int array[] = {30, 60, 50, 100, 20, 250};
    int key = 250;
    int ans = -1;
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
            ans = i;
    }
    if (ans != -1)
    {

        cout << "present at array index " << ans ;
    }
    else
    {
        cout << "Element not present in array";
    }
}