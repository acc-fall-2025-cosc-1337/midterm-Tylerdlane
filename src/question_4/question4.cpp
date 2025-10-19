//
#include "question4.h"

int find_gcd(int a, int b)
{
    int gcd = -1;
    int minVal = (a < b) ? a : b;

    for (int i = minVal; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }

    return gcd;
}
