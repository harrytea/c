// 9.»ØÎÄÊı
#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x);
int main()
{
    printf("%d\n", isPalindrome(121));
    printf("%d\n", isPalindrome(-121));
    printf("%d\n", isPalindrome(10));
    return 0;
}
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    else
    {
        int temp = x;
        long palindrome = 0;
        while (x != 0)
        {
            palindrome = palindrome * 10 + x % 10;
            x /= 10;
        }
        return (palindrome == temp)? true:false;
    }
}