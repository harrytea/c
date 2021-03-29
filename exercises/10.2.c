/*
    10-2. 删除字符串中的子串(20)
        
    输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。

    输入格式：

    输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。

    输出格式：

    在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。

    输入样例：
    Tomcat is a male ccatat
    cat
    输出样例：
    Tom is a male 
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char a[30];
	char b[5];
	gets(a);
	gets(b);

	//    char *str1 = "Borland International", *str2 = "nation", *ptr;

	char *ptr;
	int len = strlen(b);
	// char str2 = b;
	while (ptr = strstr(a, b))
	{
		char *str1 = a;
		int pos = ptr - str1;
		while (a[pos] != '\0')
		{
			a[pos] = a[pos + len];
			pos++;
		}
		a[pos] = '\0';
	}
	int i = 0;
	// while (a[i] != '\0')
	// {
	// 	printf("%c\n", a[i]);
	// 	i++;
	// }
	printf("%s\n", a);
	return 0;
}

/*
#include <stdio.h>
#include <string.h>
 
char s1[81], s2[81];
 
int main()
{
	int i, k;
	gets(s1);
	gets(s2);
	char *p = strstr(s1, s2);
	while(1)
	{
		char *p = strstr(s1, s2);
		if ( p )
		{
			for ( i=0; i<strlen(p) - strlen(s2); i++ )
			{
				p[i] = p[strlen(s2) + i];
			}
			p[i] = '\0';
	    }
	    else
		{
	    	puts(s1);
	    	break;
		}
	}
	
	return 0;
}
*/