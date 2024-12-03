#include <stdio.h>
int main() {
    int n, ldigit;
    printf("Enter a number:");
    scanf("%d", &n);
    ldigit = n%10;
    printf("%d", ldigit);
    return 0;
}