#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;

public:
    Counter() : count(0) {}
    Counter(unsigned int c) : count(c) {}
    unsigned int getCount()
    {
        return count;
    }
    // void operator++(){
    //     ++count;
    // }
    Counter operator++()
    {
        return Counter(++count);
    }
    Counter operator++(int)
    {
        return Counter(count++);
    }
};

int main()
{
    Counter c1, c2, c3,c4;
    cout << "c1=" << c1.getCount() << endl;
    cout << "c2=" << c2.getCount() << endl;

    ++c1;
    ++c2;
    // ++c2;
    c3 = ++c2;
    c4=c3++;
    cout << "c1=" << c1.getCount() << endl;
    cout << "c2=" << c2.getCount() << endl;
    cout << "c3=" << c3.getCount() << endl;
    cout << "c4=" << c4.getCount() << endl;


    return 0;
}