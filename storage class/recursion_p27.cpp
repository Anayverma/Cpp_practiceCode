#include <iostream>
using namespace std;
int factorial(int);
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<"factorial is ="<<factorial(n)<<endl;
    return 0;

}
int factorial (int m){
    if(m<2)  return 1;
    else      return m*factorial(m-1);
}