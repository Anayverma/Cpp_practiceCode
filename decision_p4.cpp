#include <iostream>
using namespace std;

int main(){
    int noItem,price,total;
    cout<<"enter no. of item nad price"<<endl;
    cin>>noItem>>price;
    total=noItem*price;
    if(total>=1000){
        total*=0.9;
    }
    cout<<"total is "<< total<<endl;

    return 0;
}
