#include <stdio.h>

int main() {
    int i = 40;

    printf("--- USANDO WHILE ---\n");
    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i--;        
    }  

    printf("\n--- USANDO FOR ---\n");
    for (i = 40; i >= 1; i -= 2) {
        printf("%d\n", i);
    }  

    return 0;
}
