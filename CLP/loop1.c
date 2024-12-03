#include <stdio.h>
int main()
{
    int n = 5, i, k;
    for (i = 0; i <= n; i++)
    {
        for (k = 1; k <= n; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }
    return 0;
}