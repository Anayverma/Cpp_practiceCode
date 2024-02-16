#include <iostream>
using namespace std;
int main(){
    int n,t;
    cout<<"enter a no. and terms"<<endl;
    cin>>n>>t;
    int i=1,nm=n,sum=0,if=1;
    while(i<=t){
        sum+=(n/if);
        n=n*nm;
        if*=i;
        i++;
    }
    cout<<"sum is "<<sum ;
    return 0;
}