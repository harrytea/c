/*
    07-0. 写出这个数 (20)

    读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

    输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

    输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1空格，但一行中最后一个拼音数字后没有空格。

    输入样例：
    1234567890987654321123456789
    输出样例：
    yi san wu
*/
#include <stdio.h>
#include <math.h>
int sep(int a[], int n);
int main()
{
    const char *num[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"}; //需要用const char
    int n1;
    scanf("%d", &n1);
    int *p;
    int sep1[5] = {0};
    p = &sep1[0];
    int count1 = sep(sep1, n1);
    // printf("%d\n", *p);
    int n2 = 0;
    for (int i = 0; i < count1; i++)
    {
        n2 += *p;
        p++;
        // printf("%d\n", *p);
    }

    int *q;
    int sep2[5] = {0};
    q = &sep2[0];
    int count2 = sep(sep2, n2);
    for (int i = 0; i < count2; i++)
    {
        printf("%s ", num[*q]);
        q++;
    }
    return 0;
}
int sep(int a[], int n)
{
    int number = n; //number为自然数，一定大于0
    int count = 1;
    int temp = number;
    int m = 1;
    int *sep = a;
    while (temp > 10)
    {
        temp = temp / 10;
        count++;
        m *= 10;
    }
    int i;
    for (i = 0; i < count; i++)
    {
        int j = number / m; //取得第j位
        number = number % m;
        m /= 10;
        *sep = j;
        sep++;
    }
    return count;
}
/*
#include <stdio.h>
#include <string.h>
 
const char *num[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
 
int main()
{
	char ch, number[10];
	int s = 0, i;
	while( (ch = getchar()) != '\n' )
	{
		s += ch-'0';
	}
	sprintf(number, "%d", s);
	printf("%s", num[number[0]-'0']);
	for ( i=1; i<strlen(number); i++ )
	{
		printf(" %s", num[number[i]-'0']);
	}
	printf("\n");
 
	return 0;
}
*/