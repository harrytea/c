/*
    07-1. 换个格式输出整数 (15)

    让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

    输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

    输出格式：每个测试用例的输出占一行，用规定的格式输出n。

    输入样例1：
    234
    输出样例1：
    BBSSS1234
    输入样例2：
    23
    输出样例2：
    SS123
*/
#include <stdio.h>
int sep(int a[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int a[5] = {0};
    int wei_shu = sep(a, n);
    int k = wei_shu;
    while (wei_shu != 0)
    {
        switch (wei_shu)
        {

        case 1:
            for (int i = 0; i < a[0]; i++)
            {
                printf("%d", i+1);
            }
            break;
        case 2:
            for (int i = 0; i < a[1]; i++)
            {
                printf("S");
            }
            break;
        case 3:
            for (int i = 0; i < a[2]; i++)
            {
                printf("B");
            }
            break;
        }
        wei_shu--;
    }
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
    for (i = 0; i < count-1; i++)
    {
        sep++;
    }
    for (i = count - 1; i >= 0; i--)
    {
        int j = number / m; //从最高位开始取
        number = number % m;
        m /= 10;
        *sep = j;
        sep--;
    }
    return count;
}
/*
#include <stdio.h>
 
int main()
{
	int i, j, B, S;
	scanf("%d", &i);
	if(i >= 1 && i < 1000) 
	{
		if(i >= 1 && i < 10) 
		{
			for(j=1; j<=i; ++j) 
			{
				printf("%d", j);
			}
		}
		if(i >= 10 && i < 100) 
		{
			S = i / 10;
			for(j=1; j<=S; ++j) 
			{
				printf("S");
			}
			i = i % 10;
			for(j=1; j<=i; ++j) 
			{
				printf("%d", j);
			}
		}
		if(i >= 100 && i < 1000) 
		{
			B = i / 100;
			for(j=1; j<=B; ++j) 
			{
				printf("B");
		    }
			S = i /10 % 10;
			for(j=1; j<=S; ++j) 
			{
				printf("S");
			}
			i = i % 10;
			for(j=1; j<=i; ++j) 
			{
				printf("%d", j);	
		    }
		}
	}
	
	return 0;
}
*/