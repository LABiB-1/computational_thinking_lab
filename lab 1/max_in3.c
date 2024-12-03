#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("The maximum number is: %d\n", max);

    return 0;
}