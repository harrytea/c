// 两数之和
#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize);
int main()
{
    int nums[4] = {2, 7, 11, 15};
    int target;
    int returnSize;
    scanf("%d", &target);
    int *ret = twoSum(nums, 4, target, &returnSize);
    printf("%d %d %d", returnSize, *ret, *(ret + 1));
}
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int *ret = (int *)malloc(sizeof(int) * 2);
                *ret = i;
                *(ret + 1) = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}