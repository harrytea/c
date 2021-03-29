/*
    05-2. 念数字(15)

    输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：

    0: ling
    1: yi
    2: er
    3: san
    4: si
    5: wu
    6: liu
    7: qi
    8: ba
    9: jiu
    输入格式：

    输入在一行中给出一个整数，如：1234。

    提示：整数包括负数、零和正数。

    输出格式：

    在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如yi er san si。

    输入样例：
    -600
    输出样例：
    fu liu ling ling
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    scanf("%d", &number);
    const char num[][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int count = 1;
    int temp = number;
    int m = 1;
    if (temp < 0)
    {
        printf("fu ");
        temp = abs(temp);
        number = abs(number);
    }
    while (temp > 10)
    {
        temp = temp / 10;
        count++;
        m *= 10;
    }
    for (int i = 0; i < count; i++)
    {
        int j = number / m; //取得第j位
        number = number % m;
        m /= 10;
        if (count != count - 1)
            printf("%s ", num[j]);
        else
            printf("%s", num[j]);
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
char str[20];
const char *num[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
 
int main()
{
	int i, k;
	scanf("%s", str);
	k = strlen(str);
	if ( str[0] == '-') printf("fu");
	else 
		printf("%s", num[str[0]-'0']);
	for ( i=1; i<k; i++ )
	{
		printf(" %s", num[str[i]-'0']);
	}
	printf("\n");
 
	return 0;
}
*/