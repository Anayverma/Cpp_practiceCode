#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for(int j=0;j<=14 ;j++){
        cout<<setw(4)<<j<<setw(6)<<j*j*j*j<<endl;
    }
    return  0;
}
