#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PILHA.H"

int main(){
    No *topo = NULL;
    int opcao;
    char nome[TAM_NOME];

    do{
        printf("1 - Empilhar nome\n");
        printf("2 - Desempilhar nome\n");
        printf("3 - Mostrar topo da pilha\n");
        printf("4 - Exibir toda a pilha\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d",&opcao);

        getchar();

        switch(opcao){
            case 1:
                printf("Digite um nome para empilhar: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome,"\n")] = '\0';

                topo = push(topo, nome);
                break;
            case 2:
                topo = pop(topo);
                break;
            case 3:
                if(topo != NULL){
                    printf("Topo da pilha: %s\n", topo->nome);
                } else {
                    printf("Pilha vazia\n");
                }
                break;
            case 4:
                exibir(topo);
                break;
        }
    } while(opcao != 0);

    while(topo != NULL){
        topo = pop(topo);
    }

    return 0;
}