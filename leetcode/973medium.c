// 973. 最接近原点的 K 个点
#include <stdio.h>
#include <math.h>
int cmp(const void *a, const void *b);
int **kClosest(int **points, int pointsSize, int *pointsColSize, int k, int *returnSize, int **returnColumnSizes);
int main()
{
    int points[2][2] = {{1, 3}, {-2, 2}};
    int k = 1;
    int returnSize = k;
    int returnColumnSizes[1][1];
    
}
int cmp(const void *a, const void *b)
{
    int x1 = (*(int **)a)[0], y1 = (*(int **)a)[1];
    int x2 = (*(int **)b)[0], y2 = (*(int **)b)[1];
    return (x1 * x1 + y1 * y1) - (x2 * x2 + y2 * y2);
}

int **kClosest(int **points, int pointsSize, int *pointsColSize, int k,
               int *returnSize, int **returnColumnSizes)
{
    qsort(points, pointsSize, sizeof(int **), cmp);
    *returnColumnSizes = (int *)calloc(k, sizeof(int));
    for (int i = 0; i < k; i++)
    {
        (*returnColumnSizes)[i] = 2;
    }
    *returnSize = k;
    return points;
}