#include <stdio.h>

int main() {
    int passos = 0, total = 0;

    do {
        printf("Digite o numero de passos dados: ");
        scanf("%d", &passos);
        total += passos;

        printf("Total de passos ate agora: %d\n", total);

        if (total >= 10000) {
            printf("Parabens! Voce atingiu a meta diaria de 10.000 passos!\n");
        }
    } while (total < 10000);

    return 0;
}

