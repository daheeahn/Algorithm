#include <stdio.h>

int recursive(int n)
{
    int result = 0;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            result += recursive(i) * recursive(n - 1 - i);
        }
        return result;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("n should not be under 0");
        return 0;
    }
    int result = recursive(n);
    printf("n is %d and result is %d", n, result);

    return 0;
}