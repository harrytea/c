// 26.删除排序数组中的重复项
/*
    watch使用方法
    1. *(int(*)[len])arr_name
    2. *some_pointer@len
    3. *(Object).some_pointer@len
*/
#include <stdio.h>
int removeDuplicates(int *nums, int numsSize);
int main()
{
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3};
    int length = removeDuplicates(nums, 9);
    for (int i = 0; i < length; i++)
        printf("%d\n", nums[i]);
    getchar();
    return 0;
}
int removeDuplicates(int *nums, int numsSize)
{
    // 双指针，指针i所存为不重复的值，通过移动指针j观察i所处的值是否已经存在
    // 若存在则j继续移动，否则将j处的值赋给i，同时i++
    int i = 0;
    for(int j=1;j<numsSize;j++)
    {
        if(nums[j]!=nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
}