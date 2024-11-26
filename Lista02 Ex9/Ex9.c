#include <stdio.h>
#include <string.h>

int main() {
    int x = 0, y = 0;
    char comando[10];

    do {
        printf("Digite o comando (cima, baixo, esquerda, direita ou parar): ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0 && y > 0) {
            y--;
        } else if (strcmp(comando, "baixo") == 0 && y < 4) {
            y++;
        } else if (strcmp(comando, "esquerda") == 0 && x > 0) {
            x--;
        } else if (strcmp(comando, "direita") == 0 && x < 4) {
            x++;
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando invalido ou fora do grid.\n");
        }

        printf("Posicao atual do robo: (%d, %d)\n", x, y);
    } while (strcmp(comando, "parar") != 0);

    printf("Navegacaoo encerrada.\n");
    return 0;
}

