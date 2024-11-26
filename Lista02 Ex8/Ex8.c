#include <stdio.h>

int main() {
    int bateria;
    do {
        printf("Digite o nivel da bateria (%%): ");
        scanf("%d", &bateria);

        if (bateria < 20) {
            printf("Alerta: Bateria baixa (%d%%)!\n", bateria);
        } else {
            printf("Bateria suficiente (%d%%).\n", bateria);
        }
    } while (bateria < 20);

    printf("Monitoramento encerrado.\n");
    return 0;
}

