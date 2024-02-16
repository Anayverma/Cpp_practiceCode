#include <iostream>
using namespace std;


int main(){
    int a,b,c;
    cout<<"enter value of a , b"<<endl;
    cin>>a>>b;
    cout<<"enter a operation"<<endl ;
    cin>>c;
    switch(c){
    case 1: cout<<a+b<<endl;
            break;
    case 2: cout<<a-b<<endl;
            break;
    case 3: cout<<a*b<<endl;
            break;
    case 4: cout<<a/b<<endl;
            break;
    default : cout<<"Invalid number "<<endl;
            
    }
    return 0;
}
