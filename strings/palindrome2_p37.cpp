#include <iostream>

using namespace std;

int main()
{
    char s[100];
    char r[100];

    cout << "Enter a string: ";
    cin.get(s, 100);
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        r[i] = s[length - 1 - i];
    }
    for (int i = 0; i < length; i++)
    {
        if (r[i] != s[i])
            cout << "false";
    }
    r[length] = '\0';

    cout << "true" << endl;

    return 0;
}
