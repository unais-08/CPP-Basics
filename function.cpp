#include<iostream>
using namespace std;
// function prototype

void greet();
float calculateavg(int,int);

int main(){

greet();
float avg_result=calculateavg(7,5);
cout<<avg_result<<endl;
    return 0;
}


//function defination or declaration
void greet(){
    cout<<"GM"<<endl;
}

float calculateavg(int a,int b){
    return (a+b)/2;
    
    }
