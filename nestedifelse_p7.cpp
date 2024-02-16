#include <iostream>
using namespace std;
int main(){

    // flowchart in notebook

    int a,b,c;
    cout<<"enter 3 no."<<endl;
    cin>>a>>b>>c;
    if(a>b&& a>c)   
        cout<<a<<"is the greatest"<<endl;
    else {
        if(b>c){
            cout<< b << "is the greatest"<<endl;
        }
        else{
            cout<<c<<"is the greatest "<<endl;
        }
    }
    return 0;
}