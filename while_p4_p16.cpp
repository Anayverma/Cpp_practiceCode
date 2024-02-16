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
       while(a>=b){
        cout<<a<<endl;
        a--;
    }
    }
    else
    {while(a<=b){
        cout<<a<<endl;
        a++;
    }}
    return 0;
}