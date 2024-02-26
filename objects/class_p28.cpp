#include <iostream>
using namespace std;

class someClass{
    private : //data hiding 
    // not accessible outside of class
                int someData;
    public :// accessible outside oi class 4
                void setData(int d){
                    someData=d;
                }
                void showData(){
                    cout<<"data is "<<someData<<endl;
               }
};
int main(){
    someClass obj1,obj2;
    // calling a function or sending a message
    obj1.setData(5);
    obj2.setData(6);
    obj1.showData();
    obj2.showData();

    // obj1.someData=5;  error as someadate is private
    return 0;
}