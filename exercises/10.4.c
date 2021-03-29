/*
    10-4. 字符串循环左移(20)

    输入一个字符串和一个非负整数N，要求将字符串循环左移N次。

    输入格式：

    输入在第1行中给出一个不超过100个字符长度的、以回车结束的非空字符串；第2行给出非负整数N。

    输出格式：

    在一行中输出循环左移N次后的字符串。

    输入样例：
    Hello World!
    2
    输出样例：
    llo World!He

*/
#include <stdio.h>
#include <string.h>
int main()
{
	char a[30];
	char b[30];
	int n;
	gets(a);
	scanf("%d", &n);
	int len = strlen(a), i = 0;
	while (a[i] != '\0')
	{
		if (i < n)
			b[i + len - n] = a[i];
		else
			b[i - n] = a[i];
		i++;
	}
	puts(b);
}

/*
#include <stdio.h>
#include <string.h>
 
char str[103];
 
int main()
{
	int i, k, n;
	gets(str);
	k = strlen(str);
	scanf("%d", &n);
	if ( n % k == 0 )
		puts(str);
	else
	{
		for ( i=n%k; i<k; i++ )
		{
			printf("%c", str[i]);
		}
		for ( i=0; i<n%k; i++ )
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	
	return 0;
}
*/