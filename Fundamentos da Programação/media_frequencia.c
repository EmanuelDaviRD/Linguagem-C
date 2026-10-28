#include <stdio.h>

int main() {
    float N1, N2, media;
    int aulaminis, aulaassist;
    float frequencia;

    scanf("%f %f %d %d",
          &N1, &N2, &aulaminis, &aulaassist);

    if (aulaminis <= 0 || aulaassist < 0 ||
        aulaassist > aulaminis) {
        printf("Dados de frequencia invalidos");
        return 0;
    }

    media = (N1 + N2) / 2;
    frequencia = (aulaassist * 100.0) / aulaminis;

    if (media >= 6 && frequencia >= 75) {
        printf("Aprovado com nota %.2f e frequencia igual a %.0f%%\n",
               media, frequencia);
    } else {
        printf("Reprovado\n");
    }

    return 0;
}