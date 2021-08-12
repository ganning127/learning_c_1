#include <stdio.h>
#include <stdlib.h>
#define SEVEN_WORDS "that_symbol_expands_to_all_these_words"
#define MARK 10

int main()
{
#if MARK >= 75
    printf("Mark is greater than 75\n");
#else
    printf("Your mark is really low\n");
#endif

    return 0;
}
