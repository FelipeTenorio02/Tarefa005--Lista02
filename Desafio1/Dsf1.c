#include <stdio.h>
#include <math.h>

void analisarAcoes() {
    int dias;
    printf("Quantos dias deseja analisar? ");
    scanf("%d", &dias);

    float precos[dias];
    float soma = 0, media, desvioPadrao = 0;


    for (int i = 0; i < dias; i++) {
        printf("Digite o preço da ação no dia %d: ", i + 1);
        scanf("%f", &precos[i]);
        soma += precos[i];
    }


    media = soma / dias;


    for (int i = 0; i < dias; i++) {
        desvioPadrao += pow(precos[i] - media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao / dias);


    printf("\nMedia do preço das acoes: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvioPadrao);


    if (desvioPadrao < 5) {
        printf("Desempenho: Estavel\n");
    } else {
        printf("Desempenho: Volatil\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Analisar acoes\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                analisarAcoes();
                break;
            case 2:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}

