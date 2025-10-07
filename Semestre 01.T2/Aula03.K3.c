#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero > 0)           printf("positivo\n");
    else if(numero == 0)     printf("Numero é zero\n");
    else                     printf("Negativo\n");
    if(numero % 2 ==0)       printf("Numero é par\n");
    else                     printf("Numero impar\n");

return 0;
}