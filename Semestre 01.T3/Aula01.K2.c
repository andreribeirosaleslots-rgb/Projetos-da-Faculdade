#include <stdio.h>

int main() {
    
    int temperatura = 20;
    int resultado;

    resultado = temperatura > 20 ? 1 : 0;
    if(resultado == 1){  printf("Está Frio!");}
    else{                 printf("Está calor!");}
    
return 0;
}