#include <stdio.h>

int main() {
    int xxx, yyy, zzz, dd;
    while (scanf("%d.%d.%d-%d", &xxx, &yyy, &zzz, &dd) == 4) {
        printf("%03d\n", xxx);
        printf("%03d\n", yyy);
        printf("%03d\n", zzz);
        printf("%02d\n", dd);
    }
    return 0;
}
