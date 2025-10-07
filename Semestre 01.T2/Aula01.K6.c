#include <stdio.h>

int main() {

    int Idade = 15;
    int Altura = 1.60;

    //Idade >= 18 => Verdadeira 
    //Idade <= 30 => Verdadeira 
    //Verdadeiro && Verdadeira
    //Verdadeiro && Altura > 1.70
    //Verdadeiro && Verdadeiro => Falso 

    if(Idade > 18 && Idade < 30 && Altura > 1.70) 
    printf("Você está na faixa etária e tem a altura adequada\n");
    else
    printf("Você não atende aos critérios\n");

return 0;
}