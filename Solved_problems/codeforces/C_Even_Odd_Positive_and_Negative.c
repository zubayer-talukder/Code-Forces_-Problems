#include <stdio.h>
int main()
{

    int i = 1, n, x;
    int even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        scanf("%d", &x);
        {
            if (x % 2 == 1 || x % 2 == -1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        {
            if (x > 0)
            {
                positive++;
            }
            else if (x < 0)
                negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}