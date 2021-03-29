/*
    10-0. 说反话 (20)

    给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

    输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

    输出格式：每个测试用例的输出占一行，输出倒序后的句子。

    输入样例：
    Hello World Here I Come
    输出样例：
    Come I Here World Hello
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int a[20] = {0};
    gets(str);
    int len = strlen(str);
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            a[num++] = i;
        }
    }
    for (int j = num - 1; j >= 0; j--)
    {
        int temp = a[j];
        temp++; //定位到空字符的下一个字符
        while (str[temp] != ' ' && str[temp] != '\0')
        {
            printf("%c", str[temp++]);
        }
        printf(" ");
    }
    int i = 0;
    while (str[i] != ' ')
        printf("%c", str[i++]);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
 
char str[81];
 
int main()
{
	int i, k;
	char *p;
	gets(str);
	k = strlen(str);
	p = str + k;
	while (1)
	{
		if ( p == str )
		{
			printf("%s\n", p);
			break;
		}
		if (*p == ' ' && *(p+1) != ' ')
		{
			*p = '\0';
			printf("%s ", p+1);
		}
		p--;
	}
	return 0;
}
*/