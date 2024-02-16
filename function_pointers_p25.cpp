#include <iostream>
using namespace std;
int add(int ,int );
void mult(int ,int ,int&);
int main(){
    int a=5, b=7,c,d;
    c=add(a,b);
    mult(a,b,d);
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;

    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;
    // b=b+2;
    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;
    return 0;
}
int add(int x, int y){
    return x+y;
}
void mult(int x,int y,int& z){
    z=x*y;
}