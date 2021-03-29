#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, i;
    p = (int *)malloc(sizeof(int) * 5);
    *p = 10;
    for (i = 0; i < 5; i++)
    {
        p[i] = i;
    }
    free(p);
    return 0;
}