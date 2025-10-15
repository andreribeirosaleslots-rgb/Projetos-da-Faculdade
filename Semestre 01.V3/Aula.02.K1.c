#include <stdio.h>

#define Linha 10
#define Coluna 10

int main() {
    int matriz[Linha][Coluna];
    int target = 9;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < Linha; i++) {      // Loop externo para as linhas
        for (int j = 0; j < Coluna; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%d ",matriz[i][j]);
        }   
        printf("\n");
    }
    // Busca condicional do elemento alvo
    for (int i = 0; i < Linha; i++) {      // Loop externo para as linhas
        for (int j = 0; j < Coluna; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}