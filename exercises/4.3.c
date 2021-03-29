/*
    04-3. 统计素数并求和(20)

    本题要求统计给定整数M和N区间内素数的个数并对它们求和。

    输入格式：

    输入在一行中给出2个正整数M和N（1<=M<=N<=500）。

    输出格式：

    在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

    输入样例：
    10 31
    输出样例：
    7 143
*/
#include <stdio.h>
int sushu(int);
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int i, sum = 0, total = 0;
    for (i = M; i <= N; i++)
    {
        if (sushu(i) == 1)
        {
            sum += i;
            total++;
        }
    }
    printf("%d %d", total, sum);
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
#include <stdbool.h> 
int nums(int x)
{
	int i;
	if(x ==1 ){
		return 0;
	}
	for(i=2; i*i<=x; i++){
		if(x%i == 0){
	    	return 0;
        }
	}
	return 1;
}
int main()
{
	int m,n;
	int j;
	scanf("%d %d", &m, &n);
	int count = 0;
	int sum = 0;
	for(j=m; j<=n; j++)
	{
		if(nums(j) == 1)
		{
			count++;
			sum += j;
		}
	}
	printf("%d %d", count, sum);
	
	return 0;
}
*/