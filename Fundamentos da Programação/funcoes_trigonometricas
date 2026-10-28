#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
    double grau, radiano;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &grau);

    radiano = grau * PI / 180.0;

    printf("Seno: %.4lf\n", sin(radiano));
    printf("Cosseno: %.4lf\n", cos(radiano));

    if (fabs(cos(radiano)) > 1e-10) {
        printf("Tangente: %.4lf\n", tan(radiano));
    } else {
        printf("Tangente indefinida.\n");
    }

    return 0;
}