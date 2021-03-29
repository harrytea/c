#### 字符处理函数<string.h>

1. 字符串连接函数

```c
strcat(字符数组名1，字符数组名2);//返回字符数组1的首地址
```

2. 字符串复制函数

```c
strcat(字符数组名1，字符数组名2);
```

3. 字符串比较函数

```c
strcmp(字符数组名1，字符数组名2);
```

4. 字符串长度函数

```c
strlen(字符数组名);
```

5. 字符串查找函数

```c
strstr(字符数组名1，字符数组名2);//返回第一次出现字符串的首地址，未找到返回NULL
```

#### 字符串逆序

```c
char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
int k = strlen(a);
int i, j;
char c;
for (i = 0, j = k - 1; i < j; i++, j--)
{
    c = a[i];
    a[i] = a[j];
    a[j] = c
}
```

#### 冒泡排序

```c
for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
        if (score[j] > score[j + 1])
        {
            temp = score[i];
            score[i] = score[j];
            score[j] = temp;
        }
```

#### 数组传入函数

```c
void fun(int a[], int n);
fou(a, n);
void fun(int a[][4], int n)
fun(a, n);
```

#### 指向字符串的指针

```c
/*求字符串的长度（指针做）*/
#include <stdio.h>
int my_strlen(char *pstr);
int main()
{
    char s[256], *ps = s;
    gets(ps);
    printf("%d\n", my_strlen(ps));
}
int my_strlen(char *pstr)
{
    int len = 0;
    while (*pstr != '\0')
    {
        pstr++;
        len++;
    }
    return len;
}
```
char *p="hello"; char *类型的变量为const char *，常量不可修改

#### 指针数组

```c
/*不改变数组元素顺序，按照从小到大顺序输出数组值*/
#include <stdio.h>
#define N 10
int main()
{
    int a[N], *p[N], i, j, *pt = a;
    for (i = 0; i < N; i++)
    {
        scanf("%d", pt);
        p[i] = pt++;
    }
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - i - 1; j++)
            if (*p[j] > *p[j + 1])
            {
                pt = p[j];
                p[j] = p[j + 1];
                p[j + 1] = pt;
            }
    for (i = 0; i < N; i++)
        printf("%d\t", *p[i]);
    return 0;
}
```
```c
/*多个字符串按照字典顺序排序*/
#include <stdio.h>
#include <string.h>
#define n 5
int main()
{
    char *name[5] = {"follow me", "basic", "great wall", "fortran", "computer aided design"};
    char *ps;
    int i, j, m;
    for (i = 0; i < n - 1; i++)
    {
        m = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(name[m], name[j]) > 0)
                m = j;
        ps = name[i];
        name[i] = name[m];
        name[m] = ps;
    }
    for (i = 0; i < n; i++)
        puts(name[i]);
    return 0;
}
```

#### 二级指针及多级指针

```c
/*通过二级指针来接受指向多字符串的指针数组*/
#include <stdio.h>
#include <string.h>
void sort(char **pps, int n);
int main()
{
    char *name[5] = {"Following me", "BASIC", "Great Wall", "FORTRAN", "Computer Aided Design"};
    int i;
    sort(name, 5);
    for (i = 0; i < 5; i++)
    {
        puts(name[i]);
    }
}
void sort(char **pps, int n)
{
    int i, j, m;
    char *pt;
    for (i = 0; i < n - 1; i++)
    {
        m = i;
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(*(pps + m), *(pps + j)) > 0)
                m = j;
        }
        if (m != i)
        {
            pt = *(pps + i);
            *(pps + i) = *(pps + m);
            *(pps + m) = pt;
        }
    }
}
```

```c
/*编程分解质因数*/
#include <stdio.h>
#include <stdlib.h>
int Usage()
{
    printf("Usage   :Factor data1 data2...\n");
    printf("Ex:\n");
    printf("    Factor 20\n");
    printf("    Facotr 20 56\n");
    printf("------Usage End------\n");
    return -1;
}
int main(int argc, char *argv[])
{
    int n, i, j, d;
    if (argc < 2)
        return Usage();
    n = 1;
    while (n < argc)
    {
        d = atoi(argv[n]); //将字符串转化为整数d
        printf("%d=", d);
        j = 0;
        i = 2;
        while (i <= d)
        {
            if (d % i == 0)
            {
                if (j == 0)
                    printf("%d", i);
                else
                    printf("*%d", i);
                j++;
                d /= i;
            }
            else
                i++;
        }
        printf("\n");
        n++;
    }
    return n;
}
```

#### 数组的指针与函数的指针

```c
/*应用行指针输出二维数组中的元素*/
#include <stdio.h>
int main()
{
    int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int(*p)[4];
    int i, j;
    p = a;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%2d  ", *(*(p + i) + j));
        printf("\n");
    }
}
```

```c
/*利用矩形法求多个函数定积分的近似值*/
/*函数指针*/
#include <stdio.h>
#include <math.h>
/*公用求定积分函数*/
float fun(float start, float end, float step, float (*pf)(float))
{
    float f;
    float sum = 0;
    for (f = start; f < end; f += step)
        sum += (*pf)(f)*step;
    return sum;
}
/*普通函数*/
float f1(float x)
{
    return x * x + sin(x);
}
/*取自变量的整数部分作为函数的返回值*/
float f2(float x)
{
    return (int)x;
}
float f3(float x)
{
    return fabs(x) + exp(x); //C 库函数 double fabs(double x) 返回 x 的绝对值。
}
int main()
{
    float start, end, step, result;
    float (*pf)(float x);
    start = 1.0;   //积分起点
    end = 4.0;     //积分终点
    step = 0.0005; //精度
    pf = f1;
    result = fun(start, end, step, pf);
    printf("fun1 result = %f\n", result);
    result = fun(start, end, step, f2); //直接诶使用函数指针
    printf("fun2 result = %f\n", result);
    result = fun(start, end, step, f3);
    printf("fun3 result = %f\n", result);
    return 0;
}
```

```c
/*设计Mystrstr函数*/
/*指针函数*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *MyStrstr(char *pSrc, char *pSubs)
{
    char *p1, *p2, *p3;
    for (p1 = pSrc; *p1 != '\0'; p1++)
    {
        for (p2 = p1, p3 = pSubs; *p2 && *p3; p2++, p3++)
        /**p2等价于*配！=NULL*/
        {
            if (*p2 != *p3)
                break;
        }
        if (*p3 == '\0')
            return p1;
    }
    return NULL;
}
int main()
{
    char s[] = "1232323412341235221";
    char d[] = "23234";
    char *pr;
    pr = MyStrstr(s, d);
    if (*pr != '\0')
        printf("Finded at %d,rest is %s\n", pr - s, pr);
    else
    {
        printf("No find\n");
    }
    return 0;
}
```

#### 结构体

```c
/*结构体初始化*/
#include <stdio.h>
int main()
{
    struct stu
    {
        int num;
        char name[20];
        int age;
        char sex;
        float score;
    } boy2, boy1 = {20101, "王芳", 19, 'W', 89};
    boy2 = boy1;
    printf("Number=%d\tName=%s\t", boy2.num, boy2.name);
    printf("Age=%d\tSex=%c\tScore=%.2f\n", boy2.age, boy2.sex, boy2.score);
    return 0;
}
```


```c
/*结构体数组*/
#include <stdio.h>
#define NUM 3
struct men
{
    char name[20];
    char phone[20];
    char address[30];
};
int main()
{
    struct men man[NUM];
    int i;
    for (i = 0; i < NUM; i++)
    {
        printf("input name:");
        gets(man[i].name);
        printf("input phone:");
        gets(man[i].phone);
        printf("input address:");
        gets(man[i].address);
    }
    printf("name\t\tphone\t\taddress\n\n");
    for (i = 0; i < NUM; i++)
        printf("%s\t%s\t%s\n", man[i].name, man[i].phone, man[i].address);
    return 0;
}
```

```c
/*结构体指针*/
#include<stdio.h>
struct stu
{
    int num;
    char name[20];
    int age;
    char sex;
    float score;
}*ps,boy1={20101,"王芳",19,'W',89};
int main()
{
    ps=&boy1;
    printf("Number=%d\tName=%s\t",boy1.num,boy1.name);
    printf("Age=%d\tSex=%c\tScore=%f\n\n",boy1.age,boy1.sex,boy1.score);
    printf("Number=%d\tName=%s\t",(*ps).num,(*ps).name);
    printf("Age=%d\tSex=%c\tScore=%f\n\n",(*ps).age,(*ps).sex,(*ps).score);
    printf("Number=%d\tName=%s\t",ps->num,ps->name);
    printf("Age=%d\tSex=%c\tScore=%f\n\n",ps->age,ps->sex,ps->score);
}
```

### 二级指针

