#include<iostream>
using namespace std;

void know_the_size();
void avg();
int main(){
   
    // int x = 10;
    // int y = 9;
    // cout<<(float)x/y<<endl;x
    // know_the_size();
    avg();
    return 0;
}




void avg(){
    int x,y,z;
    cout<<"enter three numbers "<<endl;
    cin>>x>>y>>z;
    float result = float(x +y+z)/3;
    cout<<result<<endl;
    cout<<(float)(x+y+z)/3<<endl;
    cout<<(double)(x+y+z)/3<<endl;

}
void know_the_size(){
     int i;
    short j;
    long k;
    long long l;
    float f;
    double d;
    char c;
    bool b;
    string s;
    cout<<sizeof(i)<<" int " <<endl;
    cout<<sizeof(j)<<" short" <<endl;
    cout<<sizeof(k)<<" long" <<endl;
    cout<<sizeof(l)<<" long long" <<endl;
    cout<<sizeof(f)<<" float" <<endl;
    cout<<sizeof(d)<<" double" <<endl;
    cout<<sizeof(c)<<" char" <<endl;
    cout<<sizeof(b)<<" bool" <<endl;
    cout<<sizeof(s)<<" string" <<endl;
}