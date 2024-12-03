#include <stdio.h>
int main()
{
    int n = 5, i, k, p=n+1;
    for (i = 1; i <= n; i++)
    {
         p--;
        for (k = 1; k <= i; k++)
        {
           
            printf("%d ", p);
        }

        printf("\n");
    }
    return 0;
}