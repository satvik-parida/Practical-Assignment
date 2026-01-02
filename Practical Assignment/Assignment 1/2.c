#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Division: %d\n", x / y);
    printf("Modulus: %d\n", x % y);
    return 0;
}