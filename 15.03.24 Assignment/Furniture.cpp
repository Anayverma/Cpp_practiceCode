// 1. Write a program for
// a furniture company. Ask the user to choose P for pine, O for oak, or M for
// mahogany. Show the price of a table manufactured with the chosen wood. Pine
// tables cost $100, oak tables cost $225, and mahogany tables cost $310. [Submit
// this file as Furniture. cpp

#include <iostream>
using namespace std;

int main()
{
    char wood;
    cout<<"Dear User! , Choose P for Pine, O for Oak, or M for Mahogany"<<endl;
    cin>>wood;
    if (wood=='P' || wood=='p') cout<<"the price of a table manufactured with  Pine cost $100"<<endl;
    if (wood=='O' || wood=='o') cout<<"the price of a table manufactured with  Oak cost $225"<<endl;
    if (wood=='M' || wood=='m') cout<<"the price of a table manufactured with  Mahogany cost $310"<<endl;
    return 0;
    
}