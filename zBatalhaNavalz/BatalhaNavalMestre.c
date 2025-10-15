#include <stdio.h>
#include <stdlib.h>

#define TAM 10          // Tamanho do tabuleiro (10x10)
#define H 5             // Tamanho das matrizes de habilidade (5x5)
#define AGUA 0          // Representa água
#define NAVIO 3         // Representa navio
#define HABILIDADE 5    // Representa área afetada

int main() {

    int tabuleiro[TAM][TAM];
    char linha[TAM] = {'A','B','C','D','E','F','G','H','I','J'};
    int i, j;

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Posiciona navio horizontal (3 posições)
    for (j = 2; j < 5; j++) {
        tabuleiro[1][j] = NAVIO;
    }

    // Posiciona navio vertical (3 posições)
    for (i = 5; i < 8; i++) {
        tabuleiro[i][7] = NAVIO;
    }

    // Posiciona navio diagonal (3 posições)
    for (i = 3; i < 6; i++) {
        tabuleiro[i][i] = NAVIO;
    }

    for (j = 1; j < 4; j++) {
        tabuleiro[9 - j][j] = NAVIO;
    }


    // MATRIZES DE HABILIDADE (5x5)
   

    int cone[H][H], cruz[H][H], octa[H][H];
    int r, c;
    int centro = H / 2;

    // Matriz CONE ponta em cima, expandindo pra baixo
    for (r = 0; r < H; r++) {
        for (c = 0; c < H; c++) {
            if (abs(c - centro) <= r) {
                cone[r][c] = 1;
            } else {
                cone[r][c] = 0;
            }
        }
    }

    // Matriz CRUZ centro
    for (r = 0; r < H; r++) {
        for (c = 0; c < H; c++) {
            if (r == centro || c == centro) {
                cruz[r][c] = 1;
            } else {
                cruz[r][c] = 0;
            }
        }
    }

    // Matriz OCTAEDRO losango
    for (r = 0; r < H; r++) {
        for (c = 0; c < H; c++) {
            if (abs(r - centro) + abs(c - centro) <= centro) {
                octa[r][c] = 1;
            } else {
                octa[r][c] = 0;
            }
        }
    }

  
    // APLICA AS HABILIDADES NO TABULEIRO
    

    int origem_cone_l = 1, origem_cone_c = 4;
    int origem_cruz_l = 5, origem_cruz_c = 4;
    int origem_octa_l = 7, origem_octa_c = 7;

    // Cone 
    for (r = 0; r < H; r++) {
        for (c = 0; c < H; c++) {
            if (cone[r][c] == 1) {
                int lin = origem_cone_l + r;
                int col = origem_cone_c - centro + c;

                if (lin >= 0 && lin < TAM && col >= 0 && col < TAM) {
                    if (tabuleiro[lin][col] != NAVIO) {
                        tabuleiro[lin][col] = HABILIDADE;
                    }
                }
            }
        }
    }

    // Cruz
    for (r = 0; r < H; r++) {
        for (c = 0; c < H; c++) {
            if (cruz[r][c] == 1) {
                int lin = origem_cruz_l - centro + r;
                int col = origem_cruz_c - centro + c;

                if (lin >= 0 && lin < TAM && col >= 0 && col < TAM) {
                    if (tabuleiro[lin][col] != NAVIO) {
                        tabuleiro[lin][col] = HABILIDADE;
                    }
                }
            }
        }
    }

    // Octaedro
    for (r = 0; r < H; r++) {
        for (c = 0; c < H; c++) {
            if (octa[r][c] == 1) {
                int lin = origem_octa_l - centro + r;
                int col = origem_octa_c - centro + c;

                if (lin >= 0 && lin < TAM && col >= 0 && col < TAM) {
                    if (tabuleiro[lin][col] != NAVIO) {
                        tabuleiro[lin][col] = HABILIDADE;
                    }
                }
            }
        }
    }

    // EXIBE O TABULEIRO FINAL
 

    printf("   ");
    for (j = 0; j < TAM; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%c ", linha[i]);
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}