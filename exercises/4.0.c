/*
    04-0. 求符合给定条件的整数集(15)

    给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。

    输入格式：

    输入在一行中给出A。

    输出格式：

    输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。

    输入样例：
    2
    输出样例：
    234 235 243 245 253 254
    324 325 342 345 352 354
    423 425 432 435 452 453
    523 524 532 534 542 543
*/
#include <stdio.h>
int main()
{
    int i, j, k;
    int count = 0;
    for (i = 2; i < 6; i++)
    {
        for (j = 2; j < 6; j++)
            for (k = 2; k < 6; k++)
                if (i != j && i != k && j != k && count < 6)
                {
                    printf("%d", i * 100 + j * 10 + k);
                    printf(" ");
                    count++;
                }
                else if (i != j && i != k && j != k)
                    printf("%d", i * 100 + j * 10 + k);
        count = 0;
        printf("\n");
    }
    return 0;
}
/*
#include <stdio.h>
 
int main()
{
	int A, i, j, k, p = 0;
	scanf("%d", &A);
	for(i=A; i<A+4; ++i)
		for(j=A; j<A+4; ++j)
			for(k=A; k<A+4; ++k)
			{
				if(i != j && i != k && j != k)
				{
	
					printf("%d", i*100+10*j+k);
					p++;
					if(p%6 == 0)
						printf("\n");
					else 
						printf(" ");
				}
			}
	
	return 0; 
}
*/