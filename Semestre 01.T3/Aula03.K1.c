#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroComputador, numeroPessoa, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() %100 +1;

    //Inicial/Menu do jogo
    printf("Bem-Vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    //Parte de Comparação
    printf("Esolha a comparação: \n");
    scanf("%c", &tipoComparacao);
    printf("Digite um número de (entre 1 e 100): ");
    scanf("%d", &numeroPessoa);
    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case'm':
            printf("Você escolheu a opção maior!\n");
            resultado = numeroPessoa > numeroComputador ? 1 : 0;  
    break;
    case 'N':
    case 'n':
            printf("Você escolheu a opção menor!\n");
            resultado = numeroPessoa < numeroComputador ? 1 : 0;
    break;
    case 'I':
    case 'i':
            printf("Você escolheu a opção igual!\n");
            resultado = numeroPessoa == numeroComputador ? 1 : 0;
    break;
    
    default:printf("Opção de jogo invalida!\n");
        break;
    }

            printf("O número do computador é: %d e do jogador é: %d\n", numeroComputador, numeroPessoa);

    if(resultado == 1)  printf("Paravén, Você venceu!\n");
    else                printf("Infelizmente, Você perdeu!");

return 0;
}