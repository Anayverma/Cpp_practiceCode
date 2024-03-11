#include <iostream>
#include <iomanip>
#include <cstring> // Include for strlen() function

using namespace std;

int main()
{
    char s[100];
    cout << "Enter a string: ";
    cin >> setw(100) >> s;

    int length = strlen(s);
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            cout << "false\n";
            return 0; // Exit the program
        }
        i++;
        j--;
    }

    cout << "true\n";
    return 0;
}
