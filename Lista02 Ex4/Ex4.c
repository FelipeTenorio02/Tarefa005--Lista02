#include <stdio.h>

int main() {
    float deposito;

    do {
        printf("Digite o valor do deposito inicial: R$ ");
        scanf("%f", &deposito);

        if (deposito < 500) {
            printf("Erro: O deposito minimo é R$ 500,00. Tente novamente.\n");
        } else {
            printf("Deposito aceito! Conta aberta com sucesso.\n");
        }
    } while (deposito < 500);

    return 0;
}

