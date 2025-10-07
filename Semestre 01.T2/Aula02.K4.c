#include <stdio.h>

int main() {
int nota;

    printf("Digite sua nota: \n");
    scanf("%d", &nota);

    if(nota <= 40)     printf("Conceito F!\n");
    else if(nota <= 50)printf("Conceito E!\n");
    else if(nota <= 60)printf("Conceito D!\n");
    else if(nota <= 70)printf("Conceito C!\n");
    else if(nota <= 80)printf("Conceito B!\n");
    else               printf("Conceito A!\n");

return 0;
}