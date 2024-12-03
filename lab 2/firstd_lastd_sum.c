#include <stdio.h>
int main() {
    int n, num, fdigit, ldigit, sum;
    printf("Enter a number:");
    scanf("%d", &n);
    num =n;
    while (n>=10)
    {
        n =n/10;
    }
    fdigit = n;
    printf("First digit is:%d\n", fdigit);
    
    ldigit = num%10;
    printf("Last digit is:%d\n", ldigit);
    sum = fdigit+ldigit;
    printf("Sum = %d\n", sum);
    return 0;
}