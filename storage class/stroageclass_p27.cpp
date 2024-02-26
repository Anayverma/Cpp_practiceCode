#include <iostream>
using namespace std;
void func1();
void func2();
int x;
int main(){
    cout<<x<<endl;
    int x=7;
    x++;
    cout<<::x<<endl;
    func1();
    func1();
    cout<<x<<endl;
    func2();
    func2();
    return 0;
}
void func1(){
    int x=10;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
}
void func2(){
    static int x;// ... 20 21 21 22
    // int x=20;// ... 20 21 20 21 
    cout<<x<<endl;
    x++;
    cout<<x<<endl;

}