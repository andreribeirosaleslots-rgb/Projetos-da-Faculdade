#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. iniciar jogo\n");
    printf("2. Ver Regras\n");
    printf("3.  Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao){
    
    case 1:
    
        srand(time(0));
        numeroSecreto = rand() % 10;
    
        printf("Digite um numero de zero a 9: ");
        scanf("%d", &palpite);
    
    if (numeroSecreto == palpite){
        printf("Você acertou!\n");
        printf("numero secreto %d\n", numeroSecreto);}
    else{
        printf("Você errou!\n");
        printf("numero secreto %d\n", numeroSecreto);}
    break;
    case 2:
        printf("A explicação das regras!\n");
        printf("Digite a opção relacionada as regras do jogo!\n");
        scanf("%d", &regras);
    switch (regras){
    case 1:
        printf("O jopo e um teste simples intuiçao!");
    break;
    case 2:
        printf("Regras você pode escolhe um numero tem que ser aleatorio!");
    break;
        
    default:
    break;
    }}

return 0;
} 