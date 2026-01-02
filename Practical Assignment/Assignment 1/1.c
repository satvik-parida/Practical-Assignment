#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'X';
    double d = 123.456;
    printf("Integer value: %d, Size: %lu bytes\n", a, sizeof(a));
    printf("Float value: %.2f, Size: %lu bytes\n", b, sizeof(b));
    printf("Character value: %c, Size: %lu byte\n", c, sizeof(c));
    printf("Double value: %.3lf, Size: %lu bytes\n", d, sizeof(d));
    return 0;
}