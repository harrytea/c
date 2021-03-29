/*
    10-1. 在字符串中查找指定字符(15)

    输入一个字符串S，再输入一个字符c，要求在字符串S中查找字符c。如果找不到则输出“Not found”；若找到则输出字符串S中从c开始的所有字符。

    输入格式：

    输入在第1行中给出一个不超过80个字符长度的、以回车结束的非空字符串；在第2行中给出一个字符。

    输出格式：

    在一行中按照题目要求输出结果。

    输入样例1：
    It is a black box
    b
    输出样例1：
    black box
    输入样例2：
    It is a black box
    B
    输出样例2：
    Not found
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[80];
    char b;
    gets(a);
    b = getchar();
    int len = strlen(a);
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (b == a[i])
        {
            while (a[i] != '\0')
            {
                printf("%c", a[i]);
                i++;
            }
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Not found\n");
    return 0;
}
/*
#include <string.h>
#include <stdio.h>
 
char str[180];
 
int main()
{
	char ch;
	int i, k, p = 0;
	gets(str);
	k = strlen(str);
	scanf("%c", &ch);
	for ( i=0; i<k; i++ )
	{
		if ( str[i] == ch )
		{
			p = 1;
		}
		if ( p )
		{
			printf("%c", str[i]);
		}
	}
	if ( !p )
	{
		printf("Not found\n");
	}
	else
	{
		printf("\n");
	}
	
	return 0;
}
*/