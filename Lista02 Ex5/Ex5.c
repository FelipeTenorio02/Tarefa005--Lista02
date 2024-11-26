#include <stdio.h>
#include <string.h>

int main() {
    char comando[10];
    do {
        printf("Digite o comando (frente, tras, esquerda, direita ou sair): ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            printf("Robo movendo para frente.\n");
        } else if (strcmp(comando, "tras") == 0) {
            printf("Robo movendo para tras.\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            printf("Robo movendo para a esquerda.\n");
        } else if (strcmp(comando, "direita") == 0) {
            printf("Robo movendo para a direita.\n");
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando invalido.\n");
        }
    } while (strcmp(comando, "sair") != 0);

    printf("Programa encerrado.\n");
    return 0;
}

