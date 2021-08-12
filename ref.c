#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Ganning Xu";

    printf("ref: %p\n", name); // if we used %s, it auto dereferences the pointer, and prints "Ganning Xu"

    return 0;
}
