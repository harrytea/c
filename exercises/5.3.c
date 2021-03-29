/*
    05-3. 求a的连续和(15)

    输入两个整数a和n，a的范围是[0,9]，n的范围是[1,8]，求数列之和S = a+aa+aaa+...+aaa...a（n个a）。如a为2、n为8时输出的是2+22+222+...+22222222的和。

    输入格式：

    输入在一行中给出两个整数，先后表示a和n。

    输出格式：

    在一行中输出要求的数列之和。

    输入样例：
    2 4
    输出样例：
    2468
*/
#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int b=a;
    int m = 10;//每次循环*m
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count+=a;
        a *= m;
        a += b;
    }
    printf("%d\n", count);
}
/*
#include <stdio.h>
#include <math.h>
 
int main()
{
	int a, n, i, s = 0;
	scanf("%d%d", &a, &n);
	for(i=1; i<=n; ++i)
	{
		s += (pow(10.0,i)-1) * a / 9;
	}
	printf("%d", s);
	
	return 0;
}
*/