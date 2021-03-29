/*
    06-0. 混合类型数据格式化输入(5)
    
    本题要求编写程序，顺序读入浮点数1、整数、字符、浮点数2，再按照字符、整数、浮点数1、浮点数2的顺序输出。

    输入格式：

    输入在一行中顺序给出浮点数1、整数、字符、浮点数2，其间以1个空格分隔。

    输出格式：

    在一行中按照字符、整数、浮点数1、浮点数2的顺序输出，其中浮点数保留小数点后2位。

    输入样例：
    2.12 88 c 4.7
    输出样例：
    c 88 2.12 4.70

*/
#include <stdio.h>
int main()
{
    char a;
    int b;
    float c, d;
    scanf("%f %d %c %f", &c, &b, &a, &d);
    printf("%c %d %.2f %.2f", a, b, c, d);
    return 0;
}
/*
#include <stdio.h>
 
int main()
{
  float f1, f2;
  char ch;
  int i;
  scanf("%f %d %c %f", &f1, &i, &ch, &f2);
  printf("%c %d %.2f %.2f", ch, i, f1, f2);
  
  return 0;
}
*/