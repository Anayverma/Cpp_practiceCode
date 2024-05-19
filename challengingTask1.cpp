#include <iostream>
using namespace std;
int main()
{
    int pt = 16;
    int jt = 12;
    int prep1 = 2;
    int prep2 = 1;
    int pay1 = 40;
    int pay2 = 30;
    float totalpay = 0.0;
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
    cout << "total pay" << totalpay << endl;
    
    cout << "total hours she would work is " << totalTime;
}