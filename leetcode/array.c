// 118.Ñî»ÔÈý½Ç
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	int a[5] = { 1,2,3,4,5 };
	int b[5][5] = { { 1,2,3,4,5 },{ 6,7,8,9,10 },\
	{ 11,12,13,14,15 },{ 16,17,18,19,20 },{ 21,22,23,24,25 } };
	int *aa = (int *)malloc(sizeof(int) * 5);
	int **bb = (int **)malloc(sizeof(int *) * 5);
	for (i = 0; i < 5; i++)
	{
		aa[i] = i + 1;
	}
	for (i = 0; i<5; i++)
	{
		*(bb + i) = (int*)malloc(sizeof(int) * 5);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			bb[i][j] = i*5  + j+1;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d ", bb[i][j]);
		printf("\n");
	}
	return 0;
}