// 66.加一
#include <stdio.h>
#include <stdlib.h>
int *plusOne(int *digits, int digitsSize, int *returnSize);
int main()
{
    int digits[] = {9};
    int returnSize = 0;
    int *digits2 = plusOne(digits, 1, &returnSize);
    for (int i = 0; i < returnSize; i++)
        printf("%d  ", digits2[i]);
    return 0;
}
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int i;
    // 从最后一位向前判断
    for (i = digitsSize - 1; i >= 0; i--)
    {
        // 只要数组中不全为9，就将其+1返回原数组
        if (digits[i] != 9)
        {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
            break;
        }
        // 如果最后一位是9那么将其置为0
        else
            digits[i] = 0;
    }
    // 如果数组全为9，那么数组输出一定为1000xxxxx的形式
    int *digits2;
    *returnSize = digitsSize + 1;
    digits2 = (int *)malloc(sizeof(int) * (*returnSize));
    for (i = 0; i < *returnSize; i++)
        digits2[i] = 0;
    digits2[0] = 1;
    return digits2;
}