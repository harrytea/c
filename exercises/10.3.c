/*
    10-3. 字符串逆序(15)

    输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。

    输入格式：

    输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

    输出格式：

    在一行中输出逆序后的字符串。

    输入样例：
    Hello World!
    输出样例：
    !dlroW olleH
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char a[30];
	gets(a);
	int len = strlen(a);
	int i, j;
	char temp;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	puts(a);
	return 0;
}

/*
#include <stdio.h>
#include <string.h>
 
int main()
{
	char str[81];
	int k;
	gets(str);
	k = strlen(str);
	k -= 1;
	for ( k; k>=0; k-- )
	{
		printf("%c", str[k]);
	}
	printf("\n");
 
	return 0;
}
*/