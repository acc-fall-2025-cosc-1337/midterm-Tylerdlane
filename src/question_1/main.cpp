#include <iostream>
#include "question1.h"
using namespace std;

int main()
{
    string binary;
    char again = 'Y';

    while (again == 'Y' || again == 'y')
    {
        cout << "Enter an 8-bit binary string: ";
        cin >> binary;

        while (binary.length() != 8 || binary.find_first_not_of("01") != string::npos)
        {
            cout << "Invalid input. Please enter exactly 8 characters of only 1s and 0s: ";
            cin >> binary;
        }

        int result = binary_to_decimal(binary);
        cout << "Decimal value: " << result << endl;

        cout << "Try again? (Y/N): ";
        cin >> again;
    }

    cout << "Goodbye!" << endl;
    return 0;
}
