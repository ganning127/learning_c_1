#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *MakeString(char *source)
{
    char *newString;

    newString = malloc(strlen(source) + 1);
    assert(newString != NULL);
    strcpy(newString, source);

    return newString;
}
int main()
{
    char string[1000] = "Ganning Xu";

    char *newString = MakeString(string);

    printf("newString: %s\n", newString);

    return 0;
}
