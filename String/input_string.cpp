#include<iostream>
#include<string>
 
using namespace std;
int main(){
    string str;
    // cin>>str;   //trail string immediate if hitting space key
    // cout<<endl;
    // cout<<"Input string is \n"<<str;

    getline(cin,str);
    cout<<"_______"<<str;
    
    return 0;
}