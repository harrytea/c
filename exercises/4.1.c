/*
    04-1. 水仙花数(20)
   
    水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53+ 33。本题要求编写程序,计算所有N位水仙花数。

    输入格式：

    输入在一行中给出一个正整数N（3<=N<=7）。

    输出格式：

    按递增顺序输出所有N位水仙花数，每个数字占一行。

    输入样例：
    3
    输出样例：
    153
    370
    371
    407
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int N, minnum = 1, maxnum = 1;
    scanf("%d", &N);
    int i, j;
    for (i = 0; i < N; i++)
    {
        minnum *= 10;
        maxnum *= 10;
    }
    minnum /= 10;
    maxnum -= 1;
    int M = minnum;
    for (i = minnum; i < maxnum; i++)
    {
        int total = 0;
        int temp1 = i, temp2 = i;
        int M2 = M;
        for (j = 0; j < N; j++)
        {
            int a = temp1 / M2;
            total += pow(a, N);
            temp1 %= M2;
            M2 /= 10;
        }
        if (temp2 == total)
            printf("%d\n", temp2);
    }
    return 0;
}
/*
#include <stdio.h>
 
int main()
{
	int n = 0, m = 0, l = 0, k = 0, roll = 0;
	int min = 1, t = 0, sum = 0, sum1 = 0;
	scanf("%d", &n);
	m=n;
	while(m > 1)   //built the minimum for n digit
	{
		min*=10;
		m--;
	}
	t=min;
	while(t < 10*min)  //all the number for n digit
	{
		roll = t;		
		m = n;
		sum = 1;
		while(m > 0)
		{
			sum = sum*(roll%10);		
			m--;
		}
		l = n;
		while(l > 0)
		{
			roll = roll / 10;
			k = roll % 10;
			m = n;
			sum1 = 1;
			while(m > 0)
			{
				sum1 = sum1 * k;
				m--;
			}
			sum = sum + sum1;
			l--;
		}	
		if(t == sum)
		{
			printf("%d\n", t);
		}
		t++;
	}
	return 0;
}
*/