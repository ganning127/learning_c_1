#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 5;
    int y = 8;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    swap(&x, &y);

    printf("\n");

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    return 0;
}
