#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float n1, n2, n3;
} Aluno;

int main() {
    Aluno n[5];
    int i;
    float media[5];
    int posicaoMN = 0, posicaoMMedia = 0, posicaomMedia = 0;
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &n[i].matricula) != 1) return 0;
        getchar();
        fgets(n[i].nome, sizeof(n[i].nome), stdin);
        n[i].nome[strcspn(n[i].nome, "\n")] = '\0';
        if (scanf("%f", &n[i].n1) != 1) return 0;
        if (scanf("%f", &n[i].n2) != 1) return 0;
        if (scanf("%f", &n[i].n3) != 1) return 0;
        getchar();
        media[i] = (n[i].n1 + n[i].n2 + n[i].n3) / 3.0;
    }
    for (i = 0; i < 5; i++) {
        if (n[i].n1 > n[posicaoMN].n1)
            posicaoMN = i;
        if (media[i] > media[posicaoMMedia])
            posicaoMMedia = i;
        if (media[i] < media[posicaomMedia])
            posicaomMedia = i;
    }
    printf("Aluno maior nota primeira prova: %s, nota: %.2f\n", n[posicaoMN].nome, n[posicaoMN].n1);
    printf("Aluno maior media: %s, nota: %.2f\n", n[posicaoMMedia].nome, media[posicaoMMedia]);
    printf("Aluno menor media: %s, nota: %.2f\n", n[posicaomMedia].nome, media[posicaomMedia]);
    for (i = 0; i < 5; i++) {
        if (media[i] >= 6.0)
            printf("%s: Aprovado (Media: %.2f)\n", n[i].nome, media[i]);
        else
            printf("%s: Reprovado (Media: %.2f)\n", n[i].nome, media[i]);
    }
    return 0;
}
