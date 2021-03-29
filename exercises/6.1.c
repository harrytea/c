/*
    06-1. 简单计算器(20)

    模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。

    输入格式：

    输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。

    输出格式：

    在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。

    输入样例：
    1+2*10-10/2=
    输出样例：
    10
*/
#include <stdio.h>
 
int main()
{
	char ch = '0';
	int result, i, flag = 0;
	scanf("%d", &result);//输入第一个数字，此时sum=第一个数字
	while( ch != '=' )
	{
		scanf("%c", &ch);//输入第二个运算符
		if(ch == '=')
			break;
		scanf("%d", &i);//输入运算的数字
		if( ch == '+' )
			result += i;
		else if( ch == '-' )
			result -= i;
		else if( ch == '*' )
			result *= i;
		else if( ch == '/' )
		{
			if( i != 0 )
				result /= i;
			else
				flag = 1;
		}
		else
			flag = 1;
	}
	if(flag)
		printf("ERROR\n");
	else
		printf("%d", result);
		
	return 0;
}