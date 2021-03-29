// 53.最大子序和
#include <stdio.h>
#include <stdlib.h>
int maxSubArray(int *nums, int numsSize);
int main()
{
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printf("%d", maxSubArray(nums, 9));
    return 0;
}

#define MAX(a, b, c) ((a) > ((b) > (c) ? (b) : (c)) ? (a) : ((b) > (c) ? (b) : (c)))
int maxSubArray(int *nums, int numsSize)
{
    int i = 0;
    int iTmp = 0;
    int Max_Left = 0;
    int Max_Right = 0;
    int Max_l = 0;
    int Max_r = 0;

    //1,结束条件
    if ((0 == numsSize) || (1 == numsSize))
    {
        return nums[0];
    }
    else
    {
        //2,求左支
        Max_Left = maxSubArray(&nums[0], (numsSize - 1) / 2);
        //3,求右支
        Max_Right = maxSubArray(&nums[(numsSize + 1) / 2], numsSize / 2);
    }

    //4,求中间
    iTmp = 0;
    Max_l = nums[(numsSize - 1) / 2];
    for (i = (numsSize - 1) / 2; i >= 0; i--)
    {
        iTmp += nums[i];
        if (iTmp > Max_l)
        {
            Max_l = iTmp;
        }
    }

    iTmp = Max_l;
    Max_r = Max_l;
    for (i = (numsSize + 1) / 2; i < numsSize; i++)
    {
        iTmp += nums[i];
        if (iTmp > Max_r)
        {
            Max_r = iTmp;
        }
    }
    return MAX(Max_Left, Max_Right, Max_r);
}