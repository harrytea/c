/*
    05-0. 求序列前N项和(15)

    本题要求编写程序,计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。

    输入格式：

    输入在一行中给出一个正整数N。

    输出格式：

    在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。

    输入样例：
    20
    输出样例：
    32.66
*/
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i;
    double a=2,b=1;
    double sum=0;
    for (i = 0; i < N; i++)
    {
        sum+=a/b;
        int temp=a;
        a=a+b;
        b=temp;
    }
    printf("%.2lf",sum);
    return 0;
}
/*
#include <stdio.h>
 
int main()
{
	int n = 1, i;
	double a = 2, b = 1, t, s = 0;
	scanf("%d", &n);
	for(i=1; i<=n; ++i)
	{
		t = a;
		s += a/b;
		a += b;
		b = t;
	}
	printf("%.2lf", s);
 
	return 0;
}
*/