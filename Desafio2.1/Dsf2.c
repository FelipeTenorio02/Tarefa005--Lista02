#include <stdio.h>
#include <string.h>


void controleMovimento() {
    int x = 0, y = 0;
    char comando[10];

    printf("O robo está no ponto inicial (0, 0).\n");
    while (1) {
        printf("Digite o comando (frente, tras, esquerda, direita ou sair): ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0 && y < 9) {
            y++;
        } else if (strcmp(comando, "tras") == 0 && y > 0) {
            y--;
        } else if (strcmp(comando, "esquerda") == 0 && x > 0) {
            x--;
        } else if (strcmp(comando, "direita") == 0 && x < 9) {
            x++;
        } else if (strcmp(comando, "sair") == 0) {
            break;
        } else {
            printf("Comando invalido ou fora do limite do grid 10x10.\n");
        }

        printf("Posicao atual: (%d, %d)\n", x, y);
    }
}


void leituraSensores() {
    float distancia;
    do {
        printf("Digite a distancia registrada pelo sensor (em cm): ");
        scanf("%f", &distancia);

        if (distancia < 10) {
            printf("Distancia muito curta detectada! Parando sensor...\n");
        } else {
            printf("Distancia registrada: %.2f cm\n", distancia);
        }
    } while (distancia >= 10);
}


void controleAtuacao() {
    int opcao;
    do {
        printf("\nEscolha uma acao:\n");
        printf("1 - Ligar lampada\n");
        printf("2 - Tocar som\n");
        printf("3 - Mover braco\n");
        printf("4 - Voltar ao menu principal\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
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
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);
}


void monitoramentoBateria() {
    int nivelBateria;
    do {
        printf("Digite o nivel da bateria (em %%): ");
        scanf("%d", &nivelBateria);

        if (nivelBateria < 20) {
            printf("Bateria baixa (%d%%). Conecte o carregador!\n", nivelBateria);
        } else {
            printf("Bateria suficiente (%d%%).\n", nivelBateria);
        }
    } while (nivelBateria < 20);
}


void navegacaoAutonoma() {
    int x = 0, y = 0;
    char comando[10];

    printf("O robo esta no ponto inicial (0, 0).\n");
    while (1) {
        printf("Digite o comando (cima, baixo, esquerda, direita ou sair): ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0 && y > 0) {
            y--;
        } else if (strcmp(comando, "baixo") == 0 && y < 4) {
            y++;
        } else if (strcmp(comando, "esquerda") == 0 && x > 0) {
            x--;
        } else if (strcmp(comando, "direita") == 0 && x < 4) {
            x++;
        } else if (strcmp(comando, "sair") == 0) {
            break;
        } else {
            printf("Comando invalido ou fora do limite do grid 5x5.\n");
        }

        printf("Posição atual: (%d, %d)\n", x, y);
    }
}


int main() {
    int opcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1 - Controle de Movimento\n");
        printf("2 - Leitura de Sensores\n");
        printf("3 - Controle de Atuacao\n");
        printf("4 - Monitoramento de Bateria\n");
        printf("5 - Navegacao Autonoma\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                controleMovimento();
                break;
            case 2:
                leituraSensores();
                break;
            case 3:
                controleAtuacao();
                break;
            case 4:
                monitoramentoBateria();
                break;
            case 5:
                navegacaoAutonoma();
                break;
            case 6:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}

