// 88.合并两个有序数组
#include <stdio.h>
#include <stdbool.h>
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);
int main()
{
    // int nums1[] = {1, 2, 3, 0, 0, 0};
    // int nums2[] = {2, 5, 6};
    int nums1[] = {2, 0};
    int nums2[] = {1};
    merge(nums1, 2, 1, nums2, 1, 1);
    for (int i = 0; i < 2; i++)
        printf("%d  ", nums1[i]);
    return 0;
}
/*
    思路
    1. 从最后一个元素开始判断，双指针法
    将大的一个元素放到nums1的最后一个位置
    2. 遍历完后若nums2中还有剩余元素，则放入到nums1中 

*/
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int tail = m + n - 1;
    --m, --n;
    while (m >= 0 && n >= 0)
    {
        nums1[tail--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    }
    while (n >= 0)
    {
        nums1[tail--] = nums2[n--];
    }
}
