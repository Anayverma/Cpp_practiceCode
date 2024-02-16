#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a year"<<endl;
    cin>>n;
    cout<<((n%4==0&&n%100!=0) ||n%400==0?"a leap year":"not a leap year")<<endl;
    return 0;
}