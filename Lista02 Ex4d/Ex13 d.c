#include <stdio.h>

int main() {
    int ambientData[3][5] = {
        {22, 25, 23, 21, 24},
        {45, 38, 42, 40, 37},
        {400, 380, 420, 410, 390}
    };

    int totalLocais = 3;
    int totalLeituras = 5;

    for (int i = 0; i < totalLocais; i++) {
        int somaTemperaturas = 0;
        for (int j = 0; j < totalLeituras; j++) {
            somaTemperaturas += ambientData[i][j];
        }
        printf("Media de temperatura no local %d: %.2f\n", i + 1, somaTemperaturas / (float)totalLeituras);
    }
    return 0;
}

