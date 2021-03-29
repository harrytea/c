// 27.ÒÆ³ıÔªËØ
#include <stdio.h>
int removeElement(int *nums, int numsSize, int val);
int main()
{
    // int nums[] = {3,2,2,3};
    // int len = removeElement(nums, 4, 3);
    // int nums[] = {1};
    // int len = removeElement(nums, 1, 1);
    int nums[] = {3, 3};
    int len = removeElement(nums, 2, 5);
    // int nums[] = {4, 5};
    // int len = removeElement(nums, 2, 5);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", nums[i]);
    }
    // getchar();
    return 0;
}
int removeElement(int *nums, int numsSize, int val)
{
    int i, j = 0;
    for (i = 0; i < numsSize; i++)
        if (nums[i] != val)
            nums[j++] = nums[i];
    return j;
}