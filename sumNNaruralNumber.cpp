#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter n"<<endl;
    cin>>n;
    for (int i=0;i<=2*n;i+=2)
        sum+=i;
    cout<<"sum is -- "<<sum;
    return 0;
}