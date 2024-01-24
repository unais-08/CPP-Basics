#include<iostream>
using namespace std;



int main(){

int r1,c1;
cout<<"size of first matrix \n";
cin>>r1>>c1;
int A[r1][c1];
for(int i = 0 ;i<r1;i++){
    for(int j= 0 ;j<c1;j++){
        cin>>A[i][j];

    }
}

int r2,c2;
cout<<"size of second matrix \n";
cin>>r2>>c2;
int B[r2][c2];
for(int i = 0 ;i<r1;i++){
    for(int j= 0 ;j<c2;j++){
        cin>>B[i][j];

    }
}
if(r1!=c2){
    cout<<"multiplication not possible"<<endl;
    return 1 ;
}
int result[r1][c2];

for(int i = 0 ;i<r1;i++){
    for(int j = 0 ; j<c2;j++){
        int value = 0 ;
        for(int k=0;k<r2;k++){
            value+=A[i][k]*B[k][j];
        }
        result[i][j]=value;
    }
}

for(int i = 0 ;i<r1;i++){
    for(int j= 0 ;j<c2;j++){
        cout<<result[i][j]<<" ";

    }cout<<endl;
}

    return 0;
}