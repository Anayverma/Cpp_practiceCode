#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[4][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}};
    int b[4][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    {10, 11, 12} } ;
    int c[4][3];
    for (int r = 0; r < 4; r++)
        for (int col = 0; col < 3; col++)
            c[r][col] = a[r][col] + b[r][col];

    for (int r = 0; r < 4; r++)
    {
        for (int col = 0; col < 3; col++)
            cout << setw(5) << a[r][col];
            cout<<"\t"<<"+"<<"\t";
            for (int col = 0; col < 3; col++)
            cout << setw(5) << b[r][col];
            cout<<"\t"<<"="<<"\t";
            for (int col = 0; col < 3; col++)
            cout << setw(5) << c[r][col];
    cout << "\n";
    }

    return 0;
}