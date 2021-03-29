// 13.罗马数字转整数
#include <stdio.h>
int romanToInt(char *s);
int main()
{
    printf("%d\n", romanToInt("III"));
    printf("%d\n", romanToInt("IV"));
    printf("%d\n", romanToInt("IX"));
    printf("%d\n", romanToInt("LVIII"));
    printf("%d\n", romanToInt("MCMXCIV"));
    return 0;
}
int romanToInt(char *s)
{
    int sum = 0;
    while (*s != '\0')
    {
        if (*s == 'I')
            sum = *(s + 1) == 'V' || *(s + 1) == 'X' ? sum - 1 : sum + 1;
        else if (*s == 'X')
            sum = *(s + 1) == 'L' || *(s + 1) == 'C' ? sum - 10 : sum + 10;
        else if (*s == 'C')
            sum = *(s + 1) == 'D' || *(s + 1) == 'M' ? sum - 100 : sum + 100;
        else if (*s == 'V')
            sum += 5;
        else if (*s == 'L')
            sum += 50;
        else if (*s == 'D')
            sum += 500;
        else if (*s == 'M')
            sum += 1000;
        s++;
    }
    return sum;
}