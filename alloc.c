#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000];

    int *b;
    b = malloc(sizeof(int) * 1000); // 1000 ints, since each int takes 4 bytes

    b[123] = 1000;

    printf("%d\n", b[123]);

    return 0;
}
