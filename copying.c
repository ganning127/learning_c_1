#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpy1(char dest[], char source[])
{
    int i = 0;

    while (1)
    {
        printf("%d\n", dest[i] = source[i]);
        if (source[i] == '\0')
        {
            break;
        }
        i++;
    }
}

int main()
{
    char name[] = "Ganning Xu";
    char dest[sizeof(name)];
    strcpy1(dest, name);
    printf("%s\n", dest);

    return 0;
}
