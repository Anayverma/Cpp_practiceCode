#include <iostream>
using namespace std;
int main()
{
    int pt;
    int jt;
    int prep1;
    int prep2;
    int pay1;
    int pay2;
    float totalpay = 0.0;

    cout << "enter pay per hour of job A" << endl;
    cin >> pay1;

    cout << "enter pay per hour of job B" << endl;
    cin >> pay2;
    cout << "enter Total job time " << endl;
    cin >> jt;
    cout << "enter Total preparation time " << endl;
    cin >> pt;
    cout << "enter Total preparation time for 1 hour task of job A" << endl;
    cin >> prep1;
    cout << "enter Total preparation time for 1 hour task of job B" << endl;
    cin >> prep2;

    float payPerPt1 = pay1 / prep1;
    float payperPt2 = pay2 / prep2;
     int totalTime = 0;
    if (payperPt2 > payPerPt1)
    {
        while (pt - prep2 >= 0 && jt > 0)
        {
            pt -= prep2;
            jt -= 1;
            totalpay += pay2;
            totalTime += 1;
        }
        if (jt > 0)
        {
            while (pt - prep1 >= 0 && jt > 0)
            {
                totalTime += 1;
                pt -= prep1;
                jt -= 1;
                totalpay += pay1;
            }
        }
    }
    else
    {
        while (pt - prep1 >= 0 && jt > 0)
        {
            totalTime += 1;
            pt -= prep1;
            jt -= 1;
            totalpay += pay1;
        }

        if (jt > 0)
        {
            while (pt - prep2 >= 0 && jt > 0)
            {
                totalTime += 1;
                pt -= prep2;
                jt -= 1;
                totalpay += pay2;
            }
        }
    }
    cout << "total pay Rs3"<<totalpay<<endl;;
    cout<<"total hours she would work is "<<totalTime;
}