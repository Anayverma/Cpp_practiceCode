#include <iostream>
using namespace std;
int main(){
    int n,t;
    cout<<"enter a no. and terms"<<endl;
    cin>>n>>t;
    int i=1,nm=n,sum=0;
    while(i<=t){
        sum+=n;
        n=n*nm;
        i++;
    }
    cout<<"sum is "<<sum ;
    return 0;
}