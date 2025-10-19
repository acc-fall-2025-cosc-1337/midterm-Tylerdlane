
#include <iostream>
#include "question4.h"
using namespace std;

int main()
{
    int num1, num2;
    char again = 'Y';

    while (again == 'Y' || again == 'y')
    {
        cout << "Enter two integers (1-200): ";
        cin >> num1 >> num2;

        while (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200)
        {
            cout << "Invalid input. Both must be between 1 and 200: ";
            cin >> num1 >> num2;
        }

        int result = find_gcd(num1, num2);
        cout << "Greatest Common Denominator: " << result << endl;

        cout << "Try again? (Y/N): ";
        cin >> again;
    }

    cout << "Program finished." << endl;
    return 0;
}
