// a) Interpretação dos dados da primeira linha: A primeira linha da matriz ambientData
// representa as leituras de temperatura (em °C) de um local em 5 momentos.

// b)
#include <stdio.h>

int main() {
    int umidade[5] = {45, 38, 42, 40, 37};  // Dados da segunda linha
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += umidade[i];
    }

    printf("Media da umidade do solo: %.2f%%\n", soma / 5.0);
    return 0;
}

