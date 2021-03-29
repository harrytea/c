// 118.Ñî»ÔÈý½Ç
#include <stdio.h>
#include <stdlib.h>
int **generate(int numRows, int *returnSize, int **returnColumnSizes);
int main()
{
    int **nums;
    int returnSize;
    int **a;
    nums = generate(5, &returnSize, a);
    for (int i = 0; i < returnSize; i++)
    {
        for (int j = 0; j < a[i][j]; j++)
            printf("%d  ", nums[i][j]);
        printf("\n");
    }
    return 0;
}

int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    *returnSize = numRows;
    if (!numRows)
        return NULL;
    int **res = (int **)malloc(numRows * sizeof(int *));
    (*returnColumnSizes) = (int *)malloc(numRows * sizeof(int));
    for (int i = 0; i < numRows; i++)
    {
        int *row = (int *)malloc((i + 1) * sizeof(int));
        row[0] = 1;
        row[i] = 1;
        for (int j = 1; j < i; j++)
            row[j] = res[i - 1][j - 1] + res[i - 1][j];
        res[i] = row;
        (*returnColumnSizes)[i] = i + 1;
    }
    return res;
}
/*
// 118.Ñî»ÔÈý½Ç
#include <stdio.h>
#include <stdlib.h>
int **generate(int numRows, int *returnSize, int **returnColumnSizes);
int main()
{
	printf("%d %d\n", sizeof(int *), sizeof(int));
	int **nums;
	int returnSize;
	int *a = NULL;
	nums = generate(5, &returnSize, &a);
	for (int i = 0; i < returnSize; i++)
	{
		for (int j = 0; j < a[i]; j++)
			printf("%d  ", nums[i][j]);
		a[0]++;
		printf("\n");
	}
	return 0;
}

int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
	int b[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	*returnSize = numRows;
	if (!numRows)
		return NULL;
	int **res = (int **)malloc(numRows * sizeof(int *));
	(*returnColumnSizes) = (int *)malloc(numRows * sizeof(int));
	for (int i = 0; i < numRows; i++)
	{
		int *row = (int *)malloc((i + 1) * sizeof(int));
		row[0] = 1;
		row[i] = 1;
		for (int j = 1; j < i; j++)
			row[j] = res[i - 1][j - 1] + res[i - 1][j];
		res[i] = row;
		(*returnColumnSizes)[i] = i + 1;
	}
	return res;
}
*/