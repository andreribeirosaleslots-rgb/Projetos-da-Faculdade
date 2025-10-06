#include <stdio.h>

int main() {

    float temperatura, umidade;
    unsigned int estoque = 1000, estoqueminimo = 500;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
    printf("Temperatura está alta\n");}
    else{
    printf("Temperatura está dentro das normas\n");}

    if(umidade > 50){
    printf("Umidade está elevada\n");}
    else{
    printf("Umidade está dentro das normas\n");}

    if(estoque < estoqueminimo){
    printf("Estoque está abaixo do mínimo\n");}
    else{
    printf("Estoque está acima do mínimo\n");
    }
        
return 0;
}