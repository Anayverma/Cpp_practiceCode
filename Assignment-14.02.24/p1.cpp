#include <iostream>
using namespace std;

int main(){
    double gallons;
    cout<<"Enter gallons = ";
    cin>>gallons;
    double cubicFeet = gallons/7.481;
    cout<< "\n" <<gallons<< " gallons = "<<cubicFeet;
    return 0;
}