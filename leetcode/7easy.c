// 7. 整数反转
// 解题依然有问题，因为要求int和long均为32位
#include <stdio.h>
#include <math.h>
int reverse(int x);
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", reverse(x));
}
int reverse(int x)
{
    long re_number = 0;
    while (x != 0)
    {
        re_number = (re_number * 10 + x % 10);
        x /= 10;
    }
    if (re_number > pow(2, 31) - 1 || re_number < -pow(2, 31))
    {
        return 0;
    }
    return re_number;
}