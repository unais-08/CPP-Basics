#include<iostream>
#include<vector>
using namespace std;

// 1 2 1 3 1 45
int main(){
    int s = 5;
    int occurences=-1;
vector <int> v(s);
int n ;
// cout<<"length"<<endl;
// cin>>n;
cout<<"-----"<<endl;
for(int i = 0 ; i<s; i++){
    cin>>v[i];
}
int x;
cout<<"Enter the x "<<endl;
cin>>x;
    // for(int i = 0 ; i<v.size();i++){
    //    if(x==v[i]){
    //     occurences=i;
    //    }
    // }
    for(int i = v.size()-1;i>=0;i--){
        if(x==v[i])
        occurences=i;
        break;
    }
    cout<<"index: "<<occurences<<endl;

    return 0;
}