#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    int i=0,sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    n=n*(n+1)/2;
    cout<<"sum is "<<n<<" also from "<<sum ;
    return 0;
}