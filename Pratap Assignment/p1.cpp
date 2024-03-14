// Create a class Student with the follwoing data members:

// Private Data Members:
// Student Name,Student Reg No, Six subject Marks, Average, six subject's grade, percentage.
// Public Data Members:
// Accept student's name and reg no, Accept student's six subject marks,
// create a default constructor to initialize average as zero,
// calculate the relative grades in each subject for the student's mark as per the condition

// Grade ---> Criteria
// S ---> Total Marks >= (Mean + 1.5σ) S
// A ---> Total Marks >= (Mean + 0.5σ) AND Total Marks < (Mean + 1.5σ)
// B ---> Total Marks >= (Mean - 0.5σ) AND Total Marks < (Mean + 0.5σ)
// C ---> Total Marks >= (Mean – 1.0σ) AND Total Marks < (Mean - 0.5σ)
// D ---> Total Marks >= (Mean - 1.5σ) AND Total Marks < (Mean - 1.0σ)
// E  --->  Otherwise

// Mean - Class Average
// σ - Standard Deviation

// find the Greatest mark using inline function.

// display each student reg no, name, six subject mark, grades, Greatest mark for a particular student using friend function.
// if any data members required kindly add it.

// You may accept 10 student marks and do the above

#include <iostream>
#include <cmath>
using namespace std;

class Student
{
private:
    // Student Name,Student Reg No, Six subject Marks, Average, six subject's grade, percentage.
    // char name[30];
    // char regno[11];
    int marks[6];
    char grade[7];
    float average;
    float percentage;
    // friend void GetDetails();

public:
    // create a default constructor to initialize average as zero,
    Student() : average(0.0F) {}
    // Accept student's name and reg no, Accept student's six subject marks,
    void SetDetails()
    {
        // cout << "please enter name  " ;
        // cin.get(name, 30);
        // cin.ignore();
        // cout << "please enter registration number " << endl;
        // cin.get(regno, 11);
        // cin.ignore();
        for (int i = 0; i < 6; i++)
        {
            cout << "enter marks of " << i + 1 << "th subject" << endl;
            cin >> marks[i];
        }
        // cin.ignore();

    }
    // calculate the relative grades in each subject for the student's mark as per the condition

    // Grade ---> Criteria
    // S ---> Total Marks >= (Mean + 1.5σ) S
    // A ---> Total Marks >= (Mean + 0.5σ) AND Total Marks < (Mean + 1.5σ)
    // B ---> Total Marks >= (Mean - 0.5σ) AND Total Marks < (Mean + 0.5σ)
    // C ---> Total Marks >= (Mean – 1.0σ) AND Total Marks < (Mean - 0.5σ)
    // D ---> Total Marks >= (Mean - 1.5σ) AND Total Marks < (Mean - 1.0σ)
    // E  --->  Otherwise

    // Mean - Class Average
    // σ - Standard Deviation

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
    // Grade ---> Criteria
    // S ---> Total Marks >= (Mean + 1.5σ) S
    // A ---> Total Marks >= (Mean + 0.5σ) AND Total Marks < (Mean + 1.5σ)
    // B ---> Total Marks >= (Mean - 0.5σ) AND Total Marks < (Mean + 0.5σ)
    // C ---> Total Marks >= (Mean – 1.0σ) AND Total Marks < (Mean - 0.5σ)
    // D ---> Total Marks >= (Mean - 1.5σ) AND Total Marks < (Mean - 1.0σ)
    // E  --->  Otherwise
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
    void GetDetails()
    {
        // cout << name << endl;
        cout << average << endl;
        int sum;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
            cout << marks[i] << "\t\t" << grade[i] << endl;
        }
        cout << sum / 6 << endl;
    }
};

int main()
{
    Student student[10];
    float mean[6];
    float std[6];
    for (int i = 0; i < 10; i++)
    {
        student[i].SetDetails();
        cin.ignore();
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
    }
    for (int i = 0; i < 10; i++)
    {
        student[i].GetDetails();
    }
    return 0;
}