#include <stdio.h>

int main() {
    int dd, mm, aa;
    while (scanf("%d/%d/%d", &dd, &mm, &aa) == 3) {
        printf("%02d/%02d/%02d\n", mm, dd, aa);
        printf("%02d/%02d/%02d\n", aa, mm, dd);
        printf("%02d-%02d-%02d\n", dd, mm, aa);
    }
    return 0;
}
