#include <iostream>
using namespace std;

class Counter{
    protected:
        int count;
    public:
        Counter():count(0){}
        Counter(int c):count(c){}
        void show(){
            cout<<count<<endl;
        }
        Counter operator++(){Counter():count(0){}
        Counter(int c):count(c){}
            return Counter(++count);
        }
};
class CountDn : public Counter
{
    public:
        CountDn():Counter(){}
        CountDn(int c):Counter(c){}
        Counter operator--(){
            return Counter(--count);
        }
};  
int main(){
    CountDn c1(2);
    ++c1;++c1;
    c1.show();
    --c1;--c1;
    c1.show();

}
