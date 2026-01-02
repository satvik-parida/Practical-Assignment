#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two balances: ");
    scanf("%f %f", &a, &b);
    printf("Equal: %d\n", a == b);
    printf("First greater: %d\n", a > b);
    printf("Second greater: %d\n", b > a);
    return 0;
}