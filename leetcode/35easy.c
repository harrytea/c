// 35.ËÑË÷²åÈëÎ»ÖÃ
#include <stdio.h>
int searchInsert(int *nums, int numsSize, int target);
int main()
{
    int nums[] = {0};
}
int searchInsert(int *nums, int numsSize, int target)
{
    if (nums == NULL || numsSize == 0)
        return 0;
    int i;
    for (i = 0; i < numsSize; i++)
        if (nums[i] >= target)
            return i;
}