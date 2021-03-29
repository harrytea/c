// 122.????????
#include <stdio.h>
int maxProfit(int *prices, int pricesSize);
int main()
{
    int prices[10] = {7,6,4,3,1};
    printf("%d", maxProfit(prices, 5));
    return 0;
}
int maxProfit(int *prices, int pricesSize)
{
    int count = 0;
    for (int i = 0; i < pricesSize - 1; i++)
    {
        int temp = prices[i];
        int j = i + 1;

        if (temp >= prices[j])
            continue;
        else
        {
            temp = prices[j];
            while (1)
            {
                if (j + 1 < pricesSize && temp <= prices[j + 1])
                {
                    temp = prices[j + 1];
                    j++;
                }
                else
                    break;
            }
        }
        count += temp - prices[i];
        i = j;
    }
    return count;
}