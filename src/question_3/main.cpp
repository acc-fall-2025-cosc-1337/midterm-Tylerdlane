#include <iostream>
#include "question3.h"
using namespace std;

int main()
{
    double gpa;
    char again = 'Y';

    while (again == 'Y' || again == 'y')
    {
        cout << "Enter GPA (0.0 - 4.0): ";
        cin >> gpa;

        while (gpa < 0.0 || gpa > 4.0)
        {
            cout << "Invalid GPA. Enter between 0.0 and 4.0: ";
            cin >> gpa;
        }

        string grade = gpa_to_letter_grade(gpa);
        cout << "Letter grade: " << grade << endl;

        cout << "Try another? (Y/N): ";
        cin >> again;
    }

    cout << "Program ended." << endl;
    return 0;
}
