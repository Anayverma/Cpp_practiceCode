#include <iostream>
using namespace std;

class Distance {
private:
    float feet, inch;
public:
    void setData(float f, float i) {
        feet = f;
        inch = i;
    }
    void showData() {
        cout << feet << "'-" << inch << "\"" << endl;
    }
};

int main() {
    Distance obj1;
    obj1.setData(5, 6); // Corrected: Passing both feet and inches
    obj1.showData();    // Corrected: Correct function name

    // obj1.someData=5;  error as someadate is private
    return 0;
}
