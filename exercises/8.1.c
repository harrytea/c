/*
    08-1. 求一批整数中出现最多的个位数字(20)

    给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。

    输入格式：

    输入在第1行中给出正整数N（<=1000），在第2行中给出N个不超过整型范围的正整数，数字间以空格分隔。

    输出格式：

    在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。

    输入样例：
    3
    1234 2345 3456
    输出样例：
    3: 3 4
*/
#include <stdio.h>
void sss(int a[], int n);
int main()
{
    int N;
    scanf("%d", &N);
    int num[10] = {0};
    for (int i = 0; i < N; i++)
    {
        int n;
        scanf("%d", &n);
        sss(num, n);
    }
    int max = num[0]; //max为最大值得次数
    int max_num = 0;  //max_num为最大值得数字
    int count;        //对出现频率最高的数字的个数进行计数
    for (int i = 0; i < 10; i++)
    {
        if (max < num[i])
        {
            max = num[i];
            max_num = i;
            count = 1;
        }
        else if (max == num[i])
        {
            count++;
        }
    }
    printf("%d:", max);
    int count2 = 1;
    for (int i = max_num; i < 10; i++)
    {
        if (num[i] == max)
        {
            if (count2 < count)
            {
                printf("%d ", i);
                count2++;
            }
            else
                printf("%d", i);
        }
    }
    // printf("aaa");
    return 0;
}
void sss(int a[], int n) //统计整数的每一位，在数组相应位数+1
{
    int number = n; //number为自然数，一定大于0
    int count = 1;
    int temp = number;
    int m = 1;
    int *sep = a;
    while (temp > 10)
    {
        temp = temp / 10;
        count++;
        m *= 10;
    }
    int i;
    for (i = 0; i < count; i++)
    {
        int j = number / m; //从最高位开始取
        number = number % m;
        m /= 10;
        *(sep + j) += 1;
    }
}