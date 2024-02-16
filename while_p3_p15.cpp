#include <iostream>
using namespace std;

int main(){
    // int i=0;
    int a,b;
    cout<<"enter a number range"<<endl;
    cin>>a;
    cin>>b;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    while(a<=b){
        cout<<a<<endl;
        a++;
    }
    return 0;
}