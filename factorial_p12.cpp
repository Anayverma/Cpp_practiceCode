#include <iostream>
using namespace std;

int main(){
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    int fact=1;
    for(int i=2;i<=n;i++)
        fact*=i;
    cout<<"factorial is -- "<<fact;
    return 0;
}