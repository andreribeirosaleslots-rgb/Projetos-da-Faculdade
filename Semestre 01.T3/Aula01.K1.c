#include <stdio.h>

int main() {
    
    int idade = 18;
    int resultado;

    resultado = idade > 18 ? 1 : 0 ;
    if(resultado == 1){  printf("Você e maior de idade!");}
    else{                printf("Você e menor de idade!");}

return 0;
}