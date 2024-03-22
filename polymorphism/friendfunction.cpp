#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance(int f, float i) : feet(f), inches(i){};
    Distance operator+(Distance);
    Distance operator+(double value);
    void show()
    {
        cout << feet << "  " << inches << endl;
    }
};
Distance Distance::operator+(Distance d)
{
    if (d.inches + inches > 12)
    {
        inches = inches + d.inches - 12;
        feet = feet + d.feet + 1;
    }
    return Distance(feet, inches);
}
Distance Distance::operator+(double value)
{
    // Convert the double to equivalent feet and inches
    int extraFeet = static_cast<int>(value / 12);
    float extraInches = value - (extraFeet * 12);

    // Add the extra feet and inches to the current distance
    feet += extraFeet;
    inches += extraInches;

    // Adjust if inches exceed 12
    if (inches >= 12)
    {
        inches -= 12;
        feet++;
    }

    return Distance(feet, inches);
}

int main()
{

    Distance d1(0, 0), d2(1, 2);
    d1.show();
    d2.show();
    Distance d3(0, 0);
    d3 = d1 + Distance(1, 2);
    d3.show();
    d3 = d1 + 10.0;
    d3.show();
    return 0;
}
