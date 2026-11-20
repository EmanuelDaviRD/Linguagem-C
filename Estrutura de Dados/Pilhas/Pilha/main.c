#include <stdio.h>
#include <stdlib.h>
#include "PILHA.H"

int main(){
    No *topo = NULL;
    int opcao, valor;

    do{
        printf("1 - Empilhar numero\n");
        printf("2 - Desempilhar numero\n");
        printf("3 - Mostrar topo da pilha\n");
        printf("4 - Exibir toda a pilha\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite um numero para empilhar: ");
                scanf("%d", &valor);
                topo = push(topo, valor);
                break;
            case 2:
                topo = pop(topo);
                break;
            case 3:
                if(topo != NULL){
                    printf("Topo da pilha: %d\n", topo->valor);
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