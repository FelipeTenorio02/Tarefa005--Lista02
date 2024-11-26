#include <stdio.h>

int main() {
    int acao;

    do {
        printf("Escolha uma acao:\n");
        printf("1 - Ligar lampada\n");
        printf("2 - Tocar som\n");
        printf("3 - Mover braço\n");
        printf("4 - Encerrar\n");
        printf("Opcao: ");
        scanf("%d", &acao);

        switch (acao) {
            case 1:
                printf("Lampada ligada!\n");
                break;
            case 2:
                printf("Som tocando!\n");
                break;
            case 3:
                printf("Braco movendo!\n");
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (acao != 4);

    return 0;
}

