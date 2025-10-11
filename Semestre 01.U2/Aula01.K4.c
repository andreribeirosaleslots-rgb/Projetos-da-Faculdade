#include <stdio.h>

int main() {

    // Movimentação do Cavalo 🐴

    // Variáveis que definem o número de casas a serem movidas
    int casasBaixo = 2;    // Duas casas para baixo
    int casasEsquerda = 1; // Uma casa para a esquerda

    // Contadores para os loops
    int i, j;

    // ----------------------------
    // Lógica do movimento em "L"
    // ----------------------------
    // O Cavalo se move duas casas para baixo (loop for)
    // e, dentro desse movimento, um loop interno (while)
    // simula o movimento para a esquerda após o deslocamento vertical.

    for (i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");

        // Quando o Cavalo terminar as duas casas para baixo,
        // ele move uma casa para a esquerda (movimento perpendicular).
        if (i == casasBaixo) {
            j = 1;
            while (j <= casasEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}