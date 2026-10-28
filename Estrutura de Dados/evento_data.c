#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    Data data;
} Evento;

int main() {
    Evento *evento = (Evento *)malloc(sizeof(Evento));
    if (evento == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }
    printf("Digite o nome do evento, o dia, o mes e o ano:\n");
    if (scanf(" %49[^\n]", evento->nome) != 1) return 0;
    if (scanf("%d", &evento->data.dia) != 1) return 0;
    if (scanf("%d", &evento->data.mes) != 1) return 0;
    if (scanf("%d", &evento->data.ano) != 1) return 0;

    printf("\n--- Detalhes do Evento ---\n");
    printf("Nome: %s\nData: %02d/%02d/%d\n", evento->nome, evento->data.dia, evento->data.mes, evento->data.ano);

    free(evento);
    return 0;
}
