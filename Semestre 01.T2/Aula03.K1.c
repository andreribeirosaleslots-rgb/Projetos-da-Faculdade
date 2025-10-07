#include <stdio.h>

int main() {

    int idade;
    float renda;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda: ");
    scanf("%f", &renda);

    if(idade <= 18 || idade >= 60) 
    printf("Aceito com relação a idade\n");
    else                           
    printf("Você nâo atende aos critérios devido a idade.\n");
    if(renda <= 2000) 
    printf("Você não tem descontos\n");
    else                           
    printf("Você nâo descontos devido à renda.\n");

return 0;
}
