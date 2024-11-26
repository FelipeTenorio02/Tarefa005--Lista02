#include <stdio.h>

int main() {
    int combustivel;

    do {
        printf("Digite o nivel de combustivel (em %%): ");
        scanf("%d", &combustivel);

        if (combustivel < 15) {
            printf("Alerta: Nivel de combustivel baixo! Recarregue o veiculo.\n");
        } else {
            printf("Combustivel suficiente.\n");
        }
    } while (combustivel < 100);

    printf("Combustivel cheio. Monitoramento encerrado.\n");
    return 0;
}

