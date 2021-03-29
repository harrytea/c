#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "Borland International";
    printf("%c\n",str1[0]);
    printf("%c\n",str1[1]);
    printf("%c\n",str1[2]);
    str1[2]='A';
    printf("%c\n",str1[2]);
    return 0;
}