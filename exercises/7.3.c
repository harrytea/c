/*
    07-3. 数素数 (20)

    令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

    输入格式：

    输入在一行中给出M和N，其间以空格分隔。

    输出格式：

    输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

    输入样例：
    5 27
    输出样例：
    11 13 17 19 23 29 31 37 41 43
    47 53 59 61 67 71 73 79 83 89
    97 101 103
*/
#include <stdio.h>
int sushu(int);
int main()
{
    int PM, PN;
    scanf("%d %d", &PM, &PN);
    int count = 0;
    int count2 = 0;
    for (int i = 1; i < 1000; i += 2)
    {
        if (i == 1)
            i++;
        if (sushu(i))
        {
            count++;
            if (count >= PM && count < PN)
            {
                if (count2 == 9)
                {
                    printf("%d\n", i);
                    count2 = 0;
                }
                else
                {
                    printf("%d ", i);
                    count2++;
                }
            }
            else if (count == PN)
            {
                if (count2 == 10)
                {
                    printf("%d\n", i);
                    count2 = 0;
                }
                else
                {
                    printf("%d ", i);
                    count2++;
                }
                break;
            }
        }
        if (i == 2)
            i--;
    }
}
int sushu(int a)
{
    int n = a;
    int flag = 1, i;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
/*
#include <stdio.h>
 
int a[10001];
 
int main()
{
	int i, c = 0, j, p, m, n;
	a[0] = 2;
	for ( i=3; ;i+=2 )
	{
		p = 1;
		for ( j=2; j*j<=i; j++ )
		{
			if ( i % j == 0 ) 
			{
				p = 0;
				break;
			}
		}
		if ( p )
		{
			a[++c] = i;
		}
		if ( c == 10000 ) break;
	}
	c = 0;
	scanf("%d %d", &m, &n);
	for ( i=m; i<=n; i++ )
	{
		c++;
		printf("%d", a[i-1]);
		if ( c % 10 == 0 )
			printf("\n");
		else if ( i < n )
			printf(" ");
	}
	if ( c % 5 != 0 )
		printf("\n");
	
	return 0;
}
*/