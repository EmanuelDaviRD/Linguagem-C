#include <stdio.h>

int main() {
    int opcao, n, i;
    float numero, resultado;

    do {
        printf("\n1-SOMA VARIOS NUMEROS");
        printf("\n2-MULTIPLICA VARIOS NUMEROS");
        printf("\n3-SAI DO PROGRAMA");
        printf("\nOPCAO: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                resultado = 0;
                printf("Quantos numeros deseja somar? ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++) {
                    printf("Digite o numero %d: ", i);
                    scanf("%f", &numero);
                    resultado += numero;
                }
                printf("RESULTADO DA SOMA: %.2f\n", resultado);
                break;
            case 2:
                resultado = 1;
                printf("Quantos numeros deseja multiplicar? ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++) {
                    printf("Digite o numero %d: ", i);
                    scanf("%f", &numero);
                    resultado *= numero;
                }
                printf("RESULTADO DA MULTIPLICACAO: %.2f\n", resultado);
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
