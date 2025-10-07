#include <stdio.h>

int main() {
    
    int dia, mes;

    printf("Estre o valor do mes: \n");
    scanf("%d", &mes);
    printf("Entre o valor do dia: \n");
    scanf("%d", &dia);

    if (mes == 1)      printf("Janeiro\n");
    else if (mes == 2) printf("Fevereiro\n");
    else if (mes == 3) printf("Março\n");
    else if (mes == 4) printf("Abril\n");
    else if (mes == 5) printf("Maio\n");
    else if (mes == 6) printf("Julho\n");
    else if (mes == 7) printf("Junho\n");
    else if (mes == 8) printf("Agosto\n");
    else if (mes == 9) printf("Setembro\n");
    else if (mes == 10)printf("Outubro\n");
    else if (mes == 11)printf("Novembro\n");
    else if (mes == 12)printf("Dezembro\n");
    else               printf(" inválido\n");
    if (dia == 1)      printf("Domingo\n");
    else if (dia == 2) printf("Segunda-feira\n");
    else if (dia == 3) printf("Terça-feira\n");
    else if (dia == 4) printf("Quarta-feira\n");
    else if (dia == 5) printf("Quinta-feira\n");
    else if (dia == 6) printf("Sexta-feira\n");
    else if (dia == 7) printf("Sábado\n");
    else               printf("Dia inválido\n");
  
return 0;
}