#include <stdio.h>

int max1(int list[], int low, int high)
{
    int i, max;
    max = list[low];
    if (low <= high)
    {
        for (i = low; i <= high; i++)
        {
            if (list[i] > max)
            {
                max = list[i];
            }
        }
    }
    return max;
}

int max2(int list[], int low, int high)
{
    printf("index %d %d\n", low, high);
    int i, n1, n2, max, mid;
    if (high - low == 1)
    {
        return list[high] > list[low] ? list[high] : list[low];
    }
    else if (high == low)
    {
        return list[low];
    }
    else
    {
        mid = (high + low) / 2;
        n1 = max2(list, low, mid);
        n2 = max2(list, mid + 1, high);
        return n1 > n2 ? n1 : n2;
    }
}

int main(void)
{
    int list[] = {10, 20, 100, 4, 5, 45, 3, 99, 11, 22};

    printf("가장 큰 수는 %d\n", max1(list, 0, 9)); // 100
    printf("가장 큰 수는 %d\n", max2(list, 0, 9)); // 100

    printf("가장 큰 수는 %d\n", max1(list, 5, 9)); // 99
    printf("가장 큰 수는 %d\n", max2(list, 5, 9)); // 99

    printf("가장 큰 수는 %d\n", max1(list, 3, 6)); // 45
    printf("가장 큰 수는 %d\n", max2(list, 3, 6)); // 45

    return 0;
}