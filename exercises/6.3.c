/*
    06-3. 单词长度(15)

    你的程序要读入一行文本，其中以空格分隔为若干个单词，以‘.’结束。你要输出每个单词的长度。这里的单词与语言无关，可以包括各种符号，比如“it's”算一个单词，长度为4。注意，行中可能出现连续的空格；最后的‘.’不计算在内。

    输入格式：

    输入在一行中给出一行文本，以‘.’结束。

    提示：用scanf("%c",...);来读入一个字符，直到读到‘.’为止。

    输出格式：

    在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。

    输入样例：

    It's great to see you here.
    输出样例：

    4 5 2 3 3 4

*/
#include <stdio.h>
int main()
{
    char p;
    int a[10] = {0};
    int i = 0;
    int j = 0;
    scanf("%c", &p);
    while (p != '.')
    {
        if (p != ' ')
            a[i]++;
        else
            i++;
        scanf("%c", &p);
    }
    for (int j = 0; j < i; j++)
        printf("%d ", a[j]);
    printf("%d", a[j]);
    return 0;
}
/*
#include <stdio.h>
 
int main()
{
    char s[100];
    int i = 0;
    do 
	{
        scanf("%c", &s[i]);
        i++;
    } while(s[i-1] != '.');
    int j;
    int cnt = 0;
    int k = 0;
    for(j=0; j<i; j++) 
	{
        if(s[j] != ' ') 
		{
            cnt++;
            if(k != 0 && s[j] != '.') 
			{
                printf(" ");
                k = 0;
            }
            if(s[j] == '.' && s[j - 1] != ' ' && cnt != 1) 
			{
                printf("%d", cnt-1);
            }
        }
        else if(cnt != 0) 
		{
            printf("%d", cnt);
            cnt = 0;
            k = 1;
        }
    }
    
    return 0;
}
*/