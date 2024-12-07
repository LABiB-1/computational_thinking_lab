#include <stdio.h>
int main() {
    int num, fdigit, ldigit, divisor, temp, swapNum;
    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;
    ldigit = temp % 10;
    divisor = 1;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    fdigit = temp;

    swapNum = (num % divisor) / 10;
    swapNum = (ldigit * divisor) + (swapNum * 10) + fdigit;
    printf("Swap number: %d\n", swapNum);

    return 0;
}