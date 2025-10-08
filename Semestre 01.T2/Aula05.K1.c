#include <stdio.h>

int main() {
    int opcao;

    printf("Menu Principal\n");
    printf("1. iniciar jogo\n");
    printf("2. Ver Regras\n");
    printf("3.  Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("Execução do jogo\n");
    break;
    case 2: 
    printf("As Regras do jogo\n");
    break;
    case 3:
    printf("Saindo do jogo\n");
    break;
    default:
    printf("Opção invalida\n");
    }
return 0;
}