#include <stdio.h>

int main() {
    float temperatura;
    do {
        printf("Digite a temperatura atual (em °C): ");
        scanf("%f", &temperatura);

        if (temperatura < 20 || temperatura > 25) {
            printf("Alerta: Temperatura fora do intervalo seguro!\n");
        } else {
            printf("Temperatura dentro do intervalo seguro.\n");
        }
    } while (temperatura < 20 || temperatura > 25);

    printf("Temperatura estavel. Monitoramento encerrado.\n");
    return 0;
}

