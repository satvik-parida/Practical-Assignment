#include <stdio.h>
int main() {
    int x = 5, y = 5;
    printf("Pre-increment (++x): %d\n", ++x);
    printf("Post-increment (y++): %d\n", y++);
    printf("Value of y after post-increment: %d\n", y);
    return 0;
}