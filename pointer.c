#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *intPtr;
    char *charPtr;

    struct fraction
    {
        int num;
        int den;
    };

    struct fraction *f1Ptr, *f2Ptr; // two fraction type pointers;
    struct fraction f1, f2;

    f1.num = 1;
    f1.den = 2;

    f2.num = 3;
    f2.den = 4;

    f1Ptr = &f1;
    f2Ptr = &f2;

    printf("Pointer: %p\n", f1Ptr);
    printf("Value of f1: %d\n", f1Ptr->num);
    printf("Value of f2: %d\n", *f2Ptr);
    return 0;
}
