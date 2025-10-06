#include <stdio.h>

int main () {
    int preco = 13;
    int preco1 = 150;

    if (preco > preco1) {
        printf("Preço e maior que preço1\n");
    } 
    else if( preco < preco1){       
        printf("preço1 e menor que preço\n");
    }
    else{
        printf("os preço são iguais");
    }

    return 0;
}