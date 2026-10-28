#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char data[20];
    int i, valido = 1;

    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0';

    if (strlen(data) != 10) { valido = 0; }
    if (data[2] != '/' || data[5] != '/') { valido = 0; }

    for (i = 0; i < 10 && valido; i++) {
        if (i == 2 || i == 5) continue;
        if (!isdigit(data[i])) valido = 0;
    }

    if (!valido) {
        printf("Formato invalido.\n");
        return 0;
    }

    int dia = (data[0] - '0') * 10 + (data[1] - '0');
    int mes = (data[3] - '0') * 10 + (data[4] - '0');
    int ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
