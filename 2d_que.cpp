#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the value of m and n \n";
    cin >> row >> col;
    cout << "Enter the elements of an array \n";
    int A[row][col];
    // array input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Printing input array \n";
    // print array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"--------------- "<<endl;
    //rotate matrix by 90 degreee ===> first achivement for myself first ever problem with my own logic
    int first_reverse=row-1;
    for(int index = 0;index<col;index++){
        for(int j=first_reverse;j>=0;j-- ){
            cout<<A[j][index]<<" ";
        }cout<<endl;
    }


















    
    // Linear search
    /*int target = 8;
      for(int i =0 ; i<row;i++){
            for(int j=0; j<col;j++){
                if(A[i][j]==target){
                    cout<<"found index : { "<<i<<" "<<j<<" }";
                    return 1;
                }
            }
        }
        cout<<"not found \n";
    */

    // row wise sum
    /* for (int i = 0; i < row; i++)
     {
     int sum = 0;
         for (int j = 0; j < col; j++)
         {

             sum += A[i][j];

         }
         cout << sum<<" ";
     }*/

    // col wise sum
    /* for (int i = 0; i < col; i++)
    {
    int sum = 0;
        for (int j = 0; j < row; j++)
        {

            sum += A[j][i];

        }
        cout << sum<<" ";
    }
*/
    /*
        int max = INT_MIN;
        for (int i = 0; i < row; i++)
        {
            int sum = 0;
            for (int j = 0; j < col; j++)
            {

                sum += A[i][j];
            }
            if (sum > max)
                max = sum;
        }

        cout << max << endl;

        */

       //   PRINT IN WAVE FORM
       
    //    for(int i =0;i<col;i++){//0  ==>  1
    //         if(i&1){//[0,1] [0,2] [0,3]==>2 [1 2] [1 1] [ 1 0] if(i&1)
    //             for(int j = row-1 ; j>=0 ; j--){
    //                 cout<<A[i][j]<<" ";
    //             }cout<<endl;
    //         }else{
    //             for(int j=0;j<row;j++){
    //                  cout<<A[i][j]<<" ";
    //             }cout<<endl;
    //         }
    //    }
    return 0;
}