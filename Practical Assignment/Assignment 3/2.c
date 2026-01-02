#include <stdio.h>
int main() {
    int a, b, c, p, printed;
    for (a = 1; a <= 7; a++) {
        for (b = 1; b <= 5; b++) {
            if ((a == 1 && b > 1) ||
                (a == 4 && b < 5) ||
                (a == 7 && b > 1) ||
                (b == 1 && a > 1 && a < 4) ||
                (b == 5 && a > 4 && a < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        if (a <= 5) {
            for (b = 4; b >= a; b--) {
                printf(" ");
            }
            for (c = 1; c <= (a * 2 - 1); c++) {
                if (c == 1 || c == (a * 2 - 1) || a == 3)
                    printf("*");
                else
                    printf(" ");
            }
            printed = (4 - a + 1) + (a * 2 - 1);
            for (p = printed; p < 9; p++) printf(" ");
        } else {
            for (p = 0; p < 9; p++) printf(" ");
        }
        printf("  ");
        for (b = 1; b <= 5; b++) {
            if (a == 1 || b == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        if (a <= 5) {
            for (b = 1; b < a; b++) {
                printf(" ");
            }
            printf("*");
            for (c = 1; c <= 2 * (5 - a) - 1; c++) {
                printf(" ");
            }
            if (a != 5) {
                printf("*");
            }
            printed = (a - 1) + 1 + ((2 * (5 - a) - 1) > 0 ? (2 * (5 - a) - 1) : 0) + (a != 5 ? 1 : 0);
            for (p = printed; p < 9; p++) printf(" ");
        } else {
            for (p = 0; p < 9; p++) printf(" ");
        }
        printf("  ");
        for (b = 1; b <= 5; b++) {
            if (a == 1 || a == 7 || b == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        for (b = 1; b <= 5; b++) {
            if (b == 1 ||
                (a == 1 && b == 5) ||
                (a == 2 && b == 4) ||
                (a == 3 && b == 3) ||
                (a == 5 && b == 3) ||
                (a == 6 && b == 4) ||
                (a == 7 && b == 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}