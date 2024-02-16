#include<iostream>
using namespace std;
void swap(int& ,int&);
int main(){
    int a=5,b=7;
    swap(a,b);
    return 0;
}
void swap(int& x, int& y){
    int t=x;

    x=y;

    y=t;

    cout<<y;
    return y;
}