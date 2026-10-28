#include <stdio.h>
#include <string.h>

#define VALOR 20

typedef struct {
    char marca[50];
    int ano;
    float preco;
} Carro;

void menorPreco(Carro veiculos[], float preco) {
    int i, encontrou = 0;
    for (i = 0; i < VALOR; i++) {
        if (veiculos[i].preco <= preco) {
            encontrou = 1;
            printf("\nMarca: %s\n", veiculos[i].marca);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2f\n", veiculos[i].preco);
        }
    }
    if (!encontrou)
        printf("Nenhum carro encontrado.\n");
}

void buscarMarca(Carro veiculos[], char marca[]) {
    int i, encontrou = 0;
    for (i = 0; i < VALOR; i++) {
        if (strcmp(veiculos[i].marca, marca) == 0) {
            encontrou = 1;
            printf("\nMarca: %s\n", veiculos[i].marca);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2f\n", veiculos[i].preco);
        }
    }
    if (!encontrou)
        printf("Nenhum carro encontrado.\n");
}

void buscarAno(Carro veiculos[], int ano) {
    int i, encontrou = 0;
    for (i = 0; i < VALOR; i++) {
        if (veiculos[i].ano == ano) {
            encontrou = 1;
            printf("\nMarca: %s\n", veiculos[i].marca);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2f\n", veiculos[i].preco);
        }
    }
    if (!encontrou)
        printf("Nenhum carro encontrado.\n");
}

int main() {
    Carro veiculos[VALOR];
    int i, ano;
    float preco;
    char marca[50], informacao[50];
    for (i = 0; i < VALOR; i++) {
        fgets(veiculos[i].marca, sizeof(veiculos[i].marca), stdin);
        veiculos[i].marca[strcspn(veiculos[i].marca, "\n")] = '\0';
        if (scanf("%d", &veiculos[i].ano) != 1) return 0;
        if (scanf("%f", &veiculos[i].preco) != 1) return 0;
        getchar();
    }
    printf("\nDe qual informacao voce deseja buscar?\n");
    fgets(informacao, sizeof(informacao), stdin);
    informacao[strcspn(informacao, "\n")] = '\0';
    if (strcmp(informacao, "preco") == 0) {
        if (scanf("%f", &preco) != 1) return 0;
        menorPreco(veiculos, preco);
    } else if (strcmp(informacao, "marca") == 0) {
        fgets(marca, sizeof(marca), stdin);
        marca[strcspn(marca, "\n")] = '\0';
        buscarMarca(veiculos, marca);
    } else if (strcmp(informacao, "ano") == 0) {
        if (scanf("%d", &ano) != 1) return 0;
        buscarAno(veiculos, ano);
    } else {
        printf("Opcao invalida!\n");
    }
    return 0;
}
