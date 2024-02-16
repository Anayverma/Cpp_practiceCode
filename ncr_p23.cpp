#include <iostream>
using namespace std;
int  factorial(int);
int main(){
    int n,r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    int ncr=factorial(n)/(factorial(n-r)* factorial(r));
    cout<<"nCr is "<<ncr<<endl;
    return 0;
}
int factorial(int n){
    int fact=1;
    if(n==0) return 1;
    for(int i=1;i<=n;i++)   fact*=i;
    return fact;
}