#include <stdio.h>

int main() {

    int idade, dependentes;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%f", &renda);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes); // Faltava o & aqui!

    // Corrigido o operador lógico e a lógica das condições
    if (idade >= 18 && idade < 60)printf("Aceito com relação à idade.\n");
    else                          printf("Você não atende aos critérios devido à idade.\n");
    if (renda < 3000)             printf("Você tem direito a descontos.\n");
    else                          printf("Você não tem descontos devido à renda.\n");
    if (dependentes > 2)          printf("Você atende todos os critérios.\n");
    else                          printf("Você não atende ao critério de dependentes.\n");

return 0;
}