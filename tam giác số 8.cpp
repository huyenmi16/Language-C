#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == 1)
            {
                printf("1");
                a = 1;
            }
            else
            {
                a += 2 * i - 3;
                for (int j = a; j <= a + i - 1; j++)
                    printf("%d ", j);
            }
        }
        else
        {
            b += 2 * i - 1;
            for (int j = b; j >= b - i + 1; j--)
                printf("%d ", j);
        }
        printf("\n");
    }
}