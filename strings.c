#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char localString[10];

    strcpy(localString, "binky");

    printf("%s\n", localString);

    return 0;
}
