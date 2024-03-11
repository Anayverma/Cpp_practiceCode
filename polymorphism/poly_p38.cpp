#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0.0) {}
    Distance(int f, float i):feet(f), inches(i) {}

    void getdist() {
        cout << "feet ==" << this->feet << endl;
        cout << "inches==" << this->inches << endl;
    }

    Distance operator+(Distance d2);
};

Distance Distance::operator+(Distance d2) {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0) {
        i = i - 12.0;
        f++;
    }
    return Distance(f, i);
}

int main() {
    Distance d1, d3, d4;
    d1.getdist();
    Distance d2(11, 6.25);

    d3 = d1 + d2;
    d3.getdist();

    return 0;
}
