#include <stdio.h>

int main() {
    int mesas[30] = {0};
    int codigo_mesa, lugares_pedidos, total_ocupadas = 0;

    printf("--- Sistema de Reservas: Casa de Espetaculo ---\n");

    while (1) {
        if (total_ocupadas == 30) {
            printf("\nTodas as mesas estao ocupadas. Sistema lotado!\n");
            break;
        }

        printf("\nDigite o codigo da mesa (100-129) ou 0 para sair: ");
        scanf("%d", &codigo_mesa);

        if (codigo_mesa == 0) {
            printf("Encerrando sistema de reservas.\n");
            break;
        }

        if (codigo_mesa < 100 || codigo_mesa > 129) {
            printf("Codigo invalido! Use valores entre 100 e 129.\n");
            continue;
        }

        int indice = codigo_mesa - 100;

        if (mesas[indice] > 0) {
            printf("Mesa %d ja esta reservada. Escolha outra mesa.\n", codigo_mesa);
        } else {
            printf("Lugares desejados (max 5): ");
            scanf("%d", &lugares_pedidos);

            if (lugares_pedidos > 0 && lugares_pedidos <= 5) {
                mesas[indice] = lugares_pedidos;
                total_ocupadas++;
                printf("Reserva feita com sucesso. Mesa %d tem agora %d lugares reservados.\n", codigo_mesa, mesas[indice]);
            } else {
                printf("Quantidade de lugares invalida (deve ser entre 1 e 5).\n");
            }
        }
    }

    return 0;
}
