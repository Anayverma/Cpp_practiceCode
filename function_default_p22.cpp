#include <iostream>
using namespace std;
void repchar(char='-' ,int=45 );//default value
int main(){
    repchar();
    repchar('+');
    // repchar(65);
    repchar('@',40);
    return 0;
}
void repchar(char ch ,int n){
    for(int i=1;i<=n;i++){
        cout<<ch;
    }
    cout<<endl;
}