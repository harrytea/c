/*
    11-0. 平面向量加法(10)

    本题要求编写程序，计算两个二维平面向量的和向量。

    输入格式：

    输入在一行中按照“x1 y1 x2 y2”的格式给出两个二维平面向量V1=(x1, y1)和V2=(x2, y2)的分量。

    输出格式：

    在一行中按照“(x, y)”的格式输出和向量，坐标输出小数点后1位（注意不能输出-0.0）。

    输入样例：
    3.5 -2.7 -13.9 8.7
    输出样例：
    (-10.4, 6.0)
*/
#include <stdio.h>
int main()
{
	float x1, y1, x2, y2;
	float x, y;
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	x = x1 + x2;
	y = y1 + y2;
	printf("(%.1lf,%.1lf)", x, y);
	return 0;
}

/*
#include <stdio.h>
#include <math.h>
#define EPSILON 0.05 
 
struct Vector {
	double x;
	double y;
};
 
int main(void)
{
	struct Vector v1, v2, v3;
	scanf("%lf%lf%lf%lf", &v1.x, &v1.y, &v2.x, &v2.y);
	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	if(fabs(v3.x) < EPSILON)
		v3.x = fabs(v3.x);
	if(fabs(v3.y) < EPSILON)
		v3.y = fabs(v3.y);
	printf("(%.1f, %.1f)\n", v3.x, v3.y);
	return 0;
}
*/