#include <iostream>
#include <cmath>
using namespace std;

class Student
{
private:
    char name[30];
    char regno[11];
    int marks[6];
    char grade[6]; // Fixed the size of the array
    float average;
    float percentage;

public:
    Student() : average(0.0F) {} // Fixed constructor initialization

    void SetDetails()
    {
        cout << "please enter name" << endl;
        cin.get(name, 30);
        cin.ignore(); // Add this to clear the input buffer
        cout << "please enter registration number " << endl;
        cin.get(regno, 11);
        for (int i = 0; i < 6; i++)
        {
            cout << "enter marks of " << i + 1 << "th subject" << endl; // Fixed indexing
            cin >> marks[i];
        }
    }

    int GetMarksByIndex(int index)
    {
        return marks[index];
    }

    void CalculateAverage()
    {
        for (int i = 0; i < 6; i++)
        {
            average += marks[i];
        }
        average /= 6;
    }

    void CalculateGrade(float std, float mean, int index)
    {
        if (marks[index] >= (mean + 1.5 * std))
            grade[index] = 'S';
        else if (marks[index] >= (mean + 0.5 * std))
            grade[index] = 'A';
        else if (marks[index] >= (mean - 0.5 * std))
            grade[index] = 'B';
        else if (marks[index] >= (mean - 1.0 * std))
            grade[index] = 'C';
        else if (marks[index] >= (mean - 1.5 * std))
            grade[index] = 'D';
        else
            grade[index] = 'E';
    }

    void DisplayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regno << endl;
        cout << "Marks:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << " Grade: " << grade[i] << endl;
        }
        cout << "Average: " << average << endl;
    }
};

int main()
{
    Student student[10];
    float mean[6] = {0}; // Initialize arrays
    float std[6] = {0};

    for (int i = 0; i < 10; i++)
    {
        student[i].SetDetails();
        student[i].CalculateAverage();
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mean[i] += student[j].GetMarksByIndex(i);
        }
        mean[i] /= 10;
        for (int j = 0; j < 10; j++)
        {
            std[i] += (student[j].GetMarksByIndex(i) - mean[i]) * (student[j].GetMarksByIndex(i) - mean[i]);
        }
        std[i] /= 10;
        std[i] = sqrt(std[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            student[i].CalculateGrade(std[j], mean[j], j);
        }
        student[i].DisplayDetails();
    }

    return 0;
}
