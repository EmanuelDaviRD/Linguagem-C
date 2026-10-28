#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, proximo;

    printf("Digite a quantidade de termos (N): ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");
    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            printf("%d ", 1);
        } else {
            proximo = a + b;  
            printf("%d ", proximo);
            a = b;            
            b = proximo;      
        }
    }
    printf("\n");

    return 0;
}
