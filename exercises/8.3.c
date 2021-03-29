/*
    08-3. 组个最小数 (20)

    给定数字0-9各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意0不能做首位）。例如：给定两个0，两个1，三个5，一个8，我们得到的最小的数就是10015558。

    现给定数字，请编写程序输出能够组成的最小的数。

    输入格式：

    每个输入包含1个测试用例。每个测试用例在一行中给出10个非负整数，顺序表示我们拥有数字0、数字1、……数字9的个数。整数间用一个空格分隔。10个数字的总个数不超过50，且至少拥有1个非0的数字。

    输出格式：

    在一行中输出能够组成的最小的数。

    输入样例：
    2 2 0 0 0 3 0 0 1 0
    输出样例：
    10015558
*/
#include <stdio.h>
int main()
{
    int a[10];
    int sum = 0;
    int flag = 1;
    int temp;
    int max = 1;
    int end = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        if (flag == 1 && i != 0)
        {
            temp = i;
            a[i]--;
            flag = 0;
        }
    }
    while (sum != 1)
    {
        max *= 10;
        sum--;
    }
    end = max * temp; //确定最高位
    max /= 10;
    for (int i = 0; i < 10; i++)
    {
        while (a[i] != 0)
        {
            end = end + i * max;
            a[i]--;
            max /= 10;
        }
    }
    printf("%d", end);
}
/*
#include <stdio.h>
#include <math.h>
void bubble_sort(int a[], int n);
int main()
{
    int a[10];
    int i;
    int not_zero;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    bubble_sort(a, 10);
    for (i = 0; i < 10; i++)
        if (a[i] != 0)
        {
            not_zero = i;
            break;
        }
    int max = pow(10, 9);
    int sum = a[not_zero] * max;
    for (int j = 0; j < 10; j++)
    {
        if (j != not_zero)
        {
            max /= 10;
            sum += a[j] * max;
        }
    }
    printf("%d", sum);
    return 0;
}
void bubble_sort(int a[], int n) //下面是函数bubble_sort的程序
{
    int i, j, temp;             //定义三个整型变量
    for (j = 0; j < n - 1; j++) //用一个嵌套循环来遍历一遍每一对相邻元素 （所以冒泡函数慢嘛，时间复杂度高）
    {
        for (i = 0; i < n - 1 - j; i++)
        {
            if (a[i] > a[i + 1]) //从大到小排就把左边的">"改为"<" ！！！
            {
                temp = a[i];     //a[i]与a[i+1](即a[i]后面那个) 交换
                a[i] = a[i + 1]; //基本的交换原理"c=a;a=b;b=c"
                a[i + 1] = temp;
            }
        }
    }
}
*/
/*
#include <stdio.h>
 
int b[10];
 
int main()
{
	int i, j;
	for ( i=0; i<10; i++ )
	{
		b[i] = 0;
	}
	for ( i=0; i<10; i++ )
	{
		scanf("%d", &b[i]);
	}
	for ( i=1; i<10; i++ )
	{
		if (b[i])
		{
			printf("%d", i);
			b[i]--;
			break;
		}
	}
	for ( i=0; i<10; i++ )
	{
		for ( j=0; j<b[i]; j++ )
		{
			printf("%d", i);
		}
	}
	printf("\n");
	
	return 0;
}
*/