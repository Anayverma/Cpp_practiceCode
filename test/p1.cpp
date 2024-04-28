#include <iostream>
using namespace std;
// A function with default arguments, it can be called with // 2 arguments or 3 arguments or 4 arguments.
int sum(int x=0, int y=0, int z = 0, int w = 21) { return (x + y + z + w); }
int sum() { return (0); }

// int sum(int x, int y, float z=0, float w=0) { return (x + y + z + w); }
int main() {
     cout << sum() << endl; 
cout << sum(10, 15, 25) << endl;
 cout << sum(10, 15, 25, 30) << endl;
  return 0; }
 
