#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int nums[100];
    int i = 101;

    assert(i >= 0);
    assert(i < 100);

    nums[i] = 0;

    return 0;
}
