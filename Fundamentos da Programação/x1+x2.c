#include <stdio.h>

int main() {
    int y = 6;
    int z = 8;
    int c = 2;
    int x1, x2;

    x1 = ((y * z) - z) / c;
    x2 = (z / 2) / y++;

    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    printf("x1 + x2 = %d\n", x1 + x2);

    return 0;
}
