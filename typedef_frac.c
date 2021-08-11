#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct fraction
    {
        int num;
        int den;
    };

    typedef struct fraction Fraction;

    Fraction fraction; // decalres the variablle `fraction`, which has the type `Fraction`
                       // synonym for `struct fraction`

    fraction.num = 1;
    fraction.den = 1;
    printf("%d\n", fraction.num);
    return 0;
}
