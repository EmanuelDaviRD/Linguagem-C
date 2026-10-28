#include <stdio.h>

int main() {
    int anoNascimento = 0;

    printf("Digite o ano do seu nascimento:\n");
    scanf("%d", &anoNascimento);

    int idade = 2026 - anoNascimento;

    printf("Voce tem aproximadamente %d anos.\n", idade);

    return 0;
}
