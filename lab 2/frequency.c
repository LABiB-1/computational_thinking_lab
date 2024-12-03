#include <stdio.h>

int main() {
    int n, remainder, digit0 = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0, digit5 = 0, digit6 = 0, digit7 = 0, digit8 = 0, digit9 = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        if (remainder == 0)
        {
            digit0++;
        }
        else if (remainder == 1)
        {
            digit1++;
        }
        else if (remainder == 2)
        {
            digit2++;
        }
        else if (remainder == 3)
        {
            digit3++;
        }
        else if (remainder == 4)
        {
            digit4++;
        }
        else if (remainder == 5)
        {
            digit5++;
        }
        else if (remainder == 6)
        {
            digit6++;
        }
        else if (remainder == 7)
        {
            digit7++;
        }
        else if (remainder == 8)
        {
            digit8++;
        }
        else if (remainder == 9)
        {
            digit9++;
        }
        
        n= n/10;
    }
    printf("Number of 0:%d\n", digit0);
    printf("Number of 1:%d\n", digit1);
    printf("Number of 2:%d\n", digit2);
    printf("Number of 3:%d\n", digit3);
    printf("Number of 4:%d\n", digit4);
    printf("Number of 5:%d\n", digit5);
    printf("Number of 6:%d\n", digit6);
    printf("Number of 7:%d\n", digit7);
    printf("Number of 8:%d\n", digit8);
    printf("Number of 9:%d\n", digit9);

}