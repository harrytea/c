/*
    03-4. 成绩转换(15)

    本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

    大于等于90分为A；
    小于90且大于等于80为B；
    小于80且大于等于70为C；
    小于70且大于等于60为D；
    小于60为E。
    输入格式：

    输入在一行中给出1个整数的百分制成绩。

    输出格式：

    在一行中输出对应的五分制成绩。

    输入样例：
    90
    输出样例：
    A
*/
#include <stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    int f = score / 10;
    switch (f)
    {
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("E");
        break;
    }
    return 0;
}
/*
#include <stdio.h>
 
int main()
{
  int i;
  scanf("%d", &i);
  if(i >= 90)
    printf("A");
  else if(i < 90 && i >= 80)
    printf("B");
  else if(i < 80 && i >= 70)
    printf("C");
  else if(i < 70 && i >= 60)
    printf("D");
  else if(i < 60)
    printf("E");
    
  return 0;
}
*/