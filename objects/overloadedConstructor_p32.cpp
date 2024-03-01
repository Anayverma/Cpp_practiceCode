#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void show_dist()
    {
        cout << "feet = " << feet << endl;
        cout << "inches = " << inches << endl;
    }
    void get_dist()
    {
        cout << "Enter feet ";
        cin >> feet;
        cout << "Enter inches ";
        cin >> inches;
    }
    void add_dist(Distance, Distance);
};

void Distance ::add_dist(Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches > 12)
    {
        feet += 1;
        inches -= 12;
    }
    feet = d2.feet + d3.feet;
}

int main()
{
    Distance d1, d2(11, 6.25), d3;
    d1.get_dist();
    d3.add_dist(d1, d2);

    cout << "\n dist 1 = " ;
     d1.show_dist();
    cout << "\n dist 2 = " ;
     d2.show_dist();
    cout << "\n dist 3 = " ;
     d3.show_dist();

    return 0;
}   