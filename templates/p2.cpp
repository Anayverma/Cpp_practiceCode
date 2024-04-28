#include <iostream>
using namespace std;

const int MAX = 100;

template <class T>
class Stack
{
    int st[MAX];
    int top;

public:
    Stack() : top(0) {}
    void push(T x);
    T pop();
    void display()
    {
        for (int i = 0; i < top; i++)
        {
            cout << st[i] << endl;
        }
    }
    // then declare and define out
    // not work on friend functions
};
template <class T>
void Stack<T>::push(T x)
{
    st[top++] = x;
}

template <class T>
T Stack<T>::pop()
{
    return st[top--];
}

int main()
{
    Stack<int> s;
    Stack<double> s1;
    s.push(1);
    s.display();
    s.pop();
    s.display();

    s1.push(2.2);
    s1.display();
    s1.push(2.4);
    s1.display();
    return 0;
}