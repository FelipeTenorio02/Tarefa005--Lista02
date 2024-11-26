#include <stdio.h>

int main() {
    int co2[5] = {400, 380, 420, 410, 390};  // Dados da terceira linha
    int max = co2[0], momento = 0;

    for (int i = 1; i < 5; i++) {
        if (co2[i] > max) {
            max = co2[i];
            momento = i;
        }
    }

    printf("CO2 maximo: %d ppm no momento %d.\n", max, momento + 1);
    return 0;
}

