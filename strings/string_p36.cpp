
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char name[100];
    cout << "enter your name";
    // cin >> setw(10)>> name; // for a single line inp-> anay verma   out-> anay
    // in below is the dollar sign as delimiter or termeinator
    cin.get(name, 100, '$'); // for a multiword inp==anay verma  oup== anay verma(till 9 char as in last a null character will come)
    cout << "hello!" << name << "  how are you " << endl;
    return 0;
}