// #include <iostream>
// using namespace std;

// class test{
//     public:
//     int t=1;
//     struct str{
//          int st=0;
//     };
// };

// int main(){
//     test obj;
//     cout<<obj.t<<endl;
//     cout<<obj.str->st<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

class test {
public:
    int t = 1;
    struct str {
        int st = 0;
    };
    void func1(void);
};

void test::func1(){
    cout<<"display"<<endl;
}

int main() {
    test obj;
    cout << obj.t << endl;

    // Creating an instance of the str struct outside the class
    test::str obj_str;
    cout << obj_str.st << endl;
    obj.func1();
    cout<<"8"<< endl;

    return 0;
}
