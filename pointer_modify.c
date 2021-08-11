#include <stdio.h>
#include <stdlib.h>
// #define NULL 0

void foo()
{

    int i = 10;

    int *p = &i;

    *p = 10000;

    printf("The value of i is now: %d\n", i);
}

int main()
{
    foo();
    return 0;
}
