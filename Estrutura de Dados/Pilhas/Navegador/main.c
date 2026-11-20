#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PILHA.H"

int main() {
    No *voltar = NULL;
    No *avancar = NULL;
    char pagina_atual[TAM_URL] = "home.com";
    char nova_pagina[TAM_URL];
    int opcao;

    do {
        printf("Página Atual: %s\n", pagina_atual);
        printf("1 - Acessar nova página\n");
        printf("2 - Voltar\n");
        printf("3 - Avançar\n");
        printf("4 - Mostrar página atual\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Digite a URL da nova página: ");
                fgets(nova_pagina, sizeof(nova_pagina), stdin);
                nova_pagina[strcspn(nova_pagina, "\n")] = '\0';

                voltar = push(voltar, pagina_atual);
                strcpy(pagina_atual, nova_pagina);
                esvaziar(&avancar);
                
                printf("Navegando para: %s\n", pagina_atual);
                break;

            case 2:
                if (voltar != NULL) {
                    avancar = push(avancar, pagina_atual);
                    voltar = pop(voltar, pagina_atual);
                    
                    printf("Voltando para: %s\n", pagina_atual);
                } else {
                    printf("Não há histórico para voltar!\n");
                }
                break;

            case 3:
                if (avancar != NULL) {
                    voltar = push(voltar, pagina_atual);
                    avancar = pop(avancar, pagina_atual);
                    
                    printf("Avançando para: %s\n", pagina_atual);
                } else {
                    printf("Não há histórico para avançar!\n");
                }
                break;

            case 4:
                printf("Página atual: %s\n", pagina_atual);
                break;

            case 0:
                printf("Encerrando navegador...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    esvaziar(&voltar);
    esvaziar(&avancar);

    return 0;
}