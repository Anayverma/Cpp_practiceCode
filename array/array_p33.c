#include <iostream>
using namespace std;
// const int n=4; like this

int main(){
    const int n=4;//can be created outside also
    // cout<<"enter size"<<endl;
    // cin>>n;
    int age[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter an age";
        cin>>age[i];
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<"\n you entered"<<age[i];
    }
    return 0;
}