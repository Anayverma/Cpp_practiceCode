#include <iostream>
using namespace std;

void print(int , int );
int main(){
    print(1990,135);
    print(1991,7290);
    print(1992,11300);
    print(1993,16200);
    return 0;
}
void print(int n1, int n2){
    cout<< n1<< " " << n2<<endl;
}