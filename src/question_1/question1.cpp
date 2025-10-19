#include "question1.h"
#include <cmath>

int binary_to_decimal(string binary)
{
    int decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}
