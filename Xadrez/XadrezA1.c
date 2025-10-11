#include <stdio.h>

int main() {

    int bispo = 1;
    int rainha = 1;

    // ============================
    // Movimento da Torre (for)
    // ============================
    printf("Movimento da Torre:\n");
    for (int torre = 1; torre <= 5; torre++) {
        printf("Movimento %d: Direita\n", torre);
    }

    printf("\n-----------------\n\n");

    // ============================
    // Movimento do Bispo (while)
    // ============================
    printf("Movimento do Bispo:\n");
    while (bispo <= 5) {
        printf("Movimento %d: Diagonal Direita\n", bispo);
        bispo++;
    }

    printf("\n-----------------\n\n");

    // ============================
    // Movimento da Rainha (do-while)
    // ============================
    printf("Movimento da Rainha:\n");
    do {
        printf("Movimento %d: Esquerda\n", rainha);
        rainha++;
    } while (rainha <= 8);

    printf("\n-----------------\n\n");

    // ============================
    // Movimento do Cavalo em "L"
    // ============================

    // O Cavalo move-se 2 casas para baixo e 1 para a esquerda.
    // Usaremos um loop for (para baixo) e um while (para esquerda).
    int baixo = 2;
    int esquerda = 1;
    int i, j;

    printf("Movimento do Cavalo:\n");

    for (i = 1; i <= baixo; i++) {
        printf("Movimento %d: Baixo\n", i);

        // Quando terminar de descer, move uma casa para a esquerda
        if (i == baixo) {
            j = 1;
            while (j <= esquerda) {
                printf("Movimento %d: Esquerda\n", j);
                j++;
            }
        }
    }

    printf("\n-----------------\n");

    return 0;
}