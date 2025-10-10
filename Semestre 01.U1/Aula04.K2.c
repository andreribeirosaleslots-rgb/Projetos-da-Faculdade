#include <stdio.h>

int main() {

    int numero;

    do
    {
    printf("Digite um número par para sair do progama...\n");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("Esse número %d é par!\n", numero);
    }} 
    while (numero % 2 != 0);

    printf("Você digitou um número par, saindo do progama");
    
return 0;
}