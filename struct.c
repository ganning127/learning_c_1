#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct fraction
    {
        int num;
        int den;
    };

    struct fraction f1, f2;

    f1.num = 1;
    f1.den = 2;

    f2.num = 3;
    f2.den = 4;

    struct fraction numbers[100]; // array of 100 struct fractions

    numbers[0].num = 50;
    numbers[0].den = 50;

    return 0;
}
