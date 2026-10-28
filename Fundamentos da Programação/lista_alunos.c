#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int numeromatricula;
    char curso[50];
} Pessoa;

int main() {
    Pessoa listaAlunos[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Nome:\n");
        fgets(listaAlunos[i].nome, sizeof(listaAlunos[i].nome), stdin);
        listaAlunos[i].nome[strcspn(listaAlunos[i].nome, "\n")] = '\0';
        printf("Matricula:\n");
        if (scanf("%d", &listaAlunos[i].numeromatricula) != 1) return 0;
        printf("Curso:\n");
        setbuf(stdin, NULL);
        fgets(listaAlunos[i].curso, sizeof(listaAlunos[i].curso), stdin);
        listaAlunos[i].curso[strcspn(listaAlunos[i].curso, "\n")] = '\0';
    }
    for (i = 0; i < 5; i++) {
        printf("Ola %s sua matricula e %d e seu curso e %s\n", listaAlunos[i].nome, listaAlunos[i].numeromatricula, listaAlunos[i].curso);
    }
    return 0;
}
