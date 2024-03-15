// 2.  Write a program that calculates the amount of
// money (compounded annually) earned on an investment. Prompt the user to enter
// an investment amount, the number of years, and the annual return for the
// investment. Prevent the user from entering the number of years less than one or
// more than 30. Display the total amount (balance) for each years of the
// investment. [Submit the file as investment.cpp. You are not allowed to use the
// power function.]

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amt = 0.0F;
    int years = 0;
    double anreturn = 0.0F;

    cout << "Dear User! Please Enter your investment amount --" << endl;
    cin >> amt;
    while (years < 1 || years > 30)
    {
        if (years <= 0)
            cout << "Please Enter a valid tenure or number of years (is should be positive , non zero , strictly less than 30 years)" << endl;
        else
            cout << "Please Enter tenure or number of years " << endl;
        cin >> years;
    }
    cout << "Please Enter annual return i.e percentage " << endl;
    cin >> anreturn;

    cout <<setw(10)<< "years" << setw(10)<< "AMOUNT" << endl;
    for (int i = 0; i < years; i++)
    {
        amt = amt * (1 + (anreturn / 100));
        cout << setw(10) << i+1 << setw(10) << fixed << setprecision(2) << amt << endl;
    }

    return 0;
}
