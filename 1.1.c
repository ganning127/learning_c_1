#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;
    int *ip; // pointer variable declaratoin;

    ip = &x; // storing the address of x into ip

    printf("Address: %x\n", ip);
    printf("Address: %x\n", &x);

    return 0;
}
