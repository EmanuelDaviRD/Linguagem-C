#include <stdio.h>
#include <string.h>
#include "meusutilitarios.h"

int main() {
    int opcao, operacao;
    int a, b;
    float c, f;
    char texto[100];

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Operacoes matematicas\n");
        printf("2 - Conversoes de temperatura\n");
        printf("3 - Manipulacao de texto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
            case 1:
                printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\nEscolha a operacao: ");
                scanf("%d", &operacao);
                printf("Digite dois numeros inteiros: ");
                scanf("%d %d", &a, &b);

                if (operacao == 1) printf("Resultado: %d\n", somar(a, b));
                else if (operacao == 2) printf("Resultado: %d\n", subtrair(a, b));
                else if (operacao == 3) printf("Resultado: %d\n", multiplicar(a, b));
                else if (operacao == 4) {
                    if (b != 0) printf("Resultado: %.2f\n", dividir((float)a, (float)b));
                    else printf("Erro: divisao por zero!\n");
                } else printf("Operacao invalida!\n");
                break;

            case 2:
                printf("\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\nEscolha a conversao: ");
                scanf("%d", &operacao);

                if (operacao == 1) {
                    printf("Digite a temperatura em Celsius: ");
                    scanf("%f", &c);
                    printf("Resultado: %.2f Fahrenheit\n", celsiusParaFahrenheit(c));
                } else if (operacao == 2) {
                    printf("Digite a temperatura em Fahrenheit: ");
                    scanf("%f", &f);
                    printf("Resultado: %.2f Celsius\n", fahrenheitParaCelsius(f));
                } else printf("Conversao invalida!\n");
                break;

            case 3:
                getchar();
                printf("Digite uma frase: ");
                fgets(texto, 100, stdin);
                texto[strcspn(texto, "\n")] = '\0';

                printf("Quantidade de vogais: %d\n", contarVogais(texto));
                inverterString(texto);
                printf("Frase invertida: %s\n", texto);
                break;

            case 0:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
