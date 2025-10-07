#include <stdio.h>

int main() {

char variavel;

    printf("Digite um valor: ");
    scanf("%c", &variavel);

    switch (variavel) {
    case 'a':
    printf("Código a ser executado se variavel == valor 1\n");
    printf("Teste do case 1");
    break;
    case 'b':
    printf("Código a ser executado se variavel == valor2\n");
    break;
    default:
    printf("Código a ser executado se variavel não for 1 ou 2\n");}

return 0;
}