#include <iostream>
using namespace std;

class FunctionWithDefaultArguments {
public:
    void lineChar(char ch = '#', int l = 40);

private:
    // No private members in this example
};

// Definition of the lineChar function
void FunctionWithDefaultArguments::lineChar(char ch, int l) {
    for(int i = 0; i < l; i++) {
        cout << ch << " ";
    }
    cout << endl;
}

int main() {
    FunctionWithDefaultArguments obj;

    // Calling lineChar() with default arguments
    obj.lineChar();

    // Calling lineChar() with one argument
    obj.lineChar('t');

    // Calling lineChar() with two arguments
    obj.lineChar('0', 10);

    return 0;
}
