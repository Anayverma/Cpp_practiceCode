#include <iostream>
using namespace std;

const int MAX = 10;

class Stack
{
private:
    int st[MAX];
    int top ;

public:
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
    void show()
    {
        for (int i = top; i > 0; i--)
            cout << "top ->" << i << " - " << st[i] << endl;
    }
};

int main()
{
    Stack s1;
    s1.push(11);
    s1.push(22);
    cout << "Displaying the Stack" << endl;
    s1.show();
    cout << endl;
    cout << "1:" << s1.pop() << endl;
    cout << "Displaying the Stack" << endl;
    s1.show();
    cout << endl;
    cout << "2:" << s1.pop() << endl;
    cout << "Displaying the Stack" << endl;
    s1.show();
    cout << endl;
}