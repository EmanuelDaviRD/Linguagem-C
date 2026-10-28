#include <stdio.h>

int main() {
    char nome[100], sexo;
    int idade;
    scanf("%s", nome);
    scanf(" %c", &sexo);
    scanf("%d", &idade);
    if ((sexo == 'F' || sexo == 'f') && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NAO ACEITA\n");
    }
    return 0;
}
