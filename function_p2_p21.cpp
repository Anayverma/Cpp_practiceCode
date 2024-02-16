#include <iostream>
// #include <string>
using namespace std;

void starline(char ,int);
int main(){
    starline('0',10);
    cout<<"Data Type     Range "<<endl;
    starline('-',20);
    cout<<"test"<<endl;
    starline('+',30);
    return 0;
}
void starline(char ch,int n){
    // string s="***********************************************";
    for(int i=0;i<n;i++){
        cout<<ch;
    }
    cout<<endl;
    // cout<<s<<endl;
}