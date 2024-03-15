// 3. Write a function
// that, when you call it, displays a message telling how many times it has been
// called: “I have been called 3 times”, for instance. Write a main() function
// that calls this function five times. Try implementing this function in two
// different ways. First, use a global variable to store the count. Second, use a
// local static variable. Which is more appropriate? Why can’t you use a local
// variable? [Submit this file as function.cpp. Write the reason as comments in
// the function.cpp file.]

#include <iostream>
using namespace std;

class CountCall
{
    int count;

private:
public:
    CountCall() : count(0) {}
    void FunctionCallGlobal()
    {
        cout << "I(FunctionCallGlobal) have been called " << ++count << "  times" << endl;
    }
    void FunctionCallLocalStatic()
    {
        {
            static int countlocal = 0;
            cout << "I(FunctionCallLocalStatic) have been called " << ++countlocal << "  times" << endl;
        }
    }
};
int main()
{

    CountCall obj1, obj2;

    obj1.FunctionCallGlobal();
    obj1.FunctionCallGlobal();
    obj1.FunctionCallGlobal();
    obj1.FunctionCallGlobal();
    obj1.FunctionCallGlobal();
    obj1.FunctionCallGlobal();

    obj2.FunctionCallLocalStatic();
    obj2.FunctionCallLocalStatic();
    obj2.FunctionCallLocalStatic();
    obj2.FunctionCallLocalStatic();
    obj2.FunctionCallLocalStatic();

    return 0;
}


// REASONS


// for GLOBAL variables we can use them for the sake of simplicity as they follow legacy apporach for initilization,
// and they map common values throughout the program, but they are disadvantageous as they are restricted to their scope 
// ,could cause conflicts on larger and complex problems .

// for LOCAL variables we cannot use at any cost to serve the above purpose as whenever they are called they are created
// as new and reinitialized every time ,never retains its value after function call when they are called hence they cannot
// keep the track for calling a  function multiple times .

// for LOCAL STATIC variables, we can use particularly for this purpose as there principle mechanism solves this issue , 
// they are like local varibles but only initilzed once when the function is called initially , after that for every call for same
// function and their usability is restricted to that particular function scope only serving our puropose.
// t allows us to maintain the count within the function scope while retaining its value between function calls. 
// This approach provides better encapsulation, as the count is not accessible from outside the function, reducing the
//  risk of unintended modifications. Additionally, using a local static variable avoids potential issues related to global 
//  variables, such as namespace pollution and potential conflicts with other parts of the code.
