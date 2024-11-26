#include <stdio.h>

int main() {
    float distancia;
    do {
        printf("Digite a distancia medida (em cm): ");
        scanf("%f", &distancia);

        if (distancia < 10) {
            printf("Distancia menor que 10 cm registrada. Parando...\n");
        } else {
            printf("Distancia registrada: %.2f cm\n", distancia);
        }
    } while (distancia >= 10);

    return 0;
}

