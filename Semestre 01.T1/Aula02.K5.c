#include <stdio.h>

int main() {

    int Idade = 9, resusltado;
        
    resusltado = Idade % 2;
    printf("A variável resultado é: %d\n", resusltado);

    if(resusltado % 2 == 0){printf("O numero e par\n");}
    
return 0;
}