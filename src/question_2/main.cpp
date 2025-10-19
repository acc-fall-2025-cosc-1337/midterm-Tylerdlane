#include <iostream>
#include <ctime>
#include "question2.h"
using namespace std;

int main()
{
    srand(time(0));

    cout << "=== Automatic 10-roll test ===" << endl;
    for (int i = 1; i <= 10; i++)
    {
        int roll = roll_die();
        cout << "Roll " << i << ": " << roll << endl;
        if (roll < 1 || roll > 6)
            cout << "Error: Value out of range!" << endl;
    }

    cout << "\n=== Interactive rolling ===" << endl;

    char choice = 'Y';
    while (choice == 'Y' || choice == 'y')
    {
        int roll = roll_die();
        cout << "You rolled: " << roll << endl;

        cout << "Roll again? (Y/N): ";
        cin >> choice;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
