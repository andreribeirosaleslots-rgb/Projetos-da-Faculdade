#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Super Trunfo\nObjetivo: tenha a carta mais forte.\nAss: André Ribeiro\n\n");

    // Variáveis da primeira carta
    char Estado1[20], Codigo1[4], Cidade1[30];
    unsigned long int Populacao1;
    int PontosTuristicos1, opcao;
    float Area1, PIB1, Densidade1, PIBPerCapita1, SuperPoder1, resultado1;

    // Variáveis da segunda carta
    char Estado2[20], Codigo2[4], Cidade2[30];
    unsigned long int Populacao2;
    int PontosTuristicos2, opcao2;
    float Area2, PIB2, Densidade2, PIBPerCapita2, SuperPoder2, resultado2;

    //Menu interativo
    printf("Menu Principal\n");
    printf("1. iniciar jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    //Switch/case
    switch (opcao)
    {
    case 1:     printf("Inciando jogo...\n");
    break;
    case 2:     printf("1. Cada jogador recebe o mesmo número de cartas no início do jogo.\n2. O jogador da vez escolhe um atributo para comparar com o do adversário.\n3. Quem tiver o maior valor nesse atributo vence a rodada e fica com as cartas.");
    break;
    case 3:     printf("Saindo...\n");
    return 0;
    default:    printf("Opção invalida!\n");
    break;
    }

    // Entrada da primeira carta
    printf("Primeira Carta\n");
    printf("Estado (A-H): "); scanf("%s", Estado1);
    printf("Código (ex: A01): "); scanf("%s", Codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]s", Cidade1);
    printf("População: "); scanf("%lu", &Populacao1);
    printf("Área: "); scanf("%f", &Area1);
    printf("PIB: "); scanf("%f", &PIB1);
    printf("Pontos turísticos: "); scanf("%d", &PontosTuristicos1);

    // Cálculos da primeira carta
    Densidade1 = Populacao1 / Area1;
    PIBPerCapita1 = PIB1 / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1.0f / Densidade1);

    // Entrada da segunda carta
    printf("\nSegunda Carta\n");
    printf("Estado (A-H): "); scanf("%s", Estado2);
    printf("Código (ex: A01): "); scanf("%s", Codigo2);
    printf("Nome da cidade: "); scanf(" %[^\n]s", Cidade2);
    printf("População: "); scanf("%lu", &Populacao2);
    printf("Área: "); scanf("%f", &Area2);
    printf("PIB: "); scanf("%f", &PIB2);
    printf("Pontos turísticos: "); scanf("%d", &PontosTuristicos2);

    // Cálculos da segunda carta
    Densidade2 = Populacao2 / Area2;
    PIBPerCapita2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1.0f / Densidade2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2 ? 1 : 2), (Populacao1 > Populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2 ? 1 : 2), (Area1 > Area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2 ? 1 : 2), (PIB1 > PIB2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2 ? 1 : 2), (PontosTuristicos1 > PontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (Densidade1 < Densidade2 ? 1 : 2), (Densidade1 < Densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBPerCapita1 > PIBPerCapita2 ? 1 : 2), (PIBPerCapita1 > PIBPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2 ? 1 : 2), (SuperPoder1 > SuperPoder2 ? 1 : 0));

    //Comparando Cartas do Super Trunfo
    printf("Carta 1 - %s: %d\n", Cidade1, Populacao1);
    printf("Carta 2 - %s: %d\n",Cidade2, Populacao2);

    if(Populacao1 > Populacao2){    printf("Resultado: Carta %d venceu!\n",Populacao1 > Populacao2);}
    else{                           printf("Carta %d perdeu!\n",(Populacao1 < Populacao2));}

    // Menu dinâmico - primeira escolha
printf("\nEscolha o PRIMEIRO atributo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &opcao);

// Mostra o segundo menu sem repetir o anterior
printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
if (opcao != 1) printf("1. População\n");
if (opcao != 2) printf("2. Área\n");
if (opcao != 3) printf("3. PIB\n");
if (opcao != 4) printf("4. Pontos Turísticos\n");
if (opcao != 5) printf("5. Densidade Demográfica\n");
scanf("%d", &opcao2);

// Garante que não sejam iguais
if (opcao == opcao2) {
    printf("\n⚠️ Você não pode escolher o mesmo atributo duas vezes!\n");
    return 0;
}

// Função auxiliar para pegar o valor correspondente ao atributo
float valorCarta1 = 0, valorCarta2 = 0;
float valorCarta1b = 0, valorCarta2b = 0;

// Atribui o primeiro atributo
switch (opcao) {
    case 1: valorCarta1 = Populacao1; valorCarta2 = Populacao2; break;
    case 2: valorCarta1 = Area1; valorCarta2 = Area2; break;
    case 3: valorCarta1 = PIB1; valorCarta2 = PIB2; break;
    case 4: valorCarta1 = PontosTuristicos1; valorCarta2 = PontosTuristicos2; break;
    case 5: valorCarta1 = Densidade1; valorCarta2 = Densidade2; break;
    default: printf("Opção inválida!"); return 0;
}

// Atribui o segundo atributo
switch (opcao2) {
    case 1: valorCarta1b = Populacao1; valorCarta2b = Populacao2; break;
    case 2: valorCarta1b = Area1; valorCarta2b = Area2; break;
    case 3: valorCarta1b = PIB1; valorCarta2b = PIB2; break;
    case 4: valorCarta1b = PontosTuristicos1; valorCarta2b = PontosTuristicos2; break;
    case 5: valorCarta1b = Densidade1; valorCarta2b = Densidade2; break;
    default: printf("Opção inválida!"); return 0;
}

// Aplica as regras de vitória
// Primeiro atributo
if (opcao == 5) { // Densidade menor vence
    if (valorCarta1 < valorCarta2) resultado1++;
    else if (valorCarta2 < valorCarta1) resultado2++;
} else {
    if (valorCarta1 > valorCarta2) resultado1++;
    else if (valorCarta2 > valorCarta1) resultado2++;
}

// Segundo atributo
if (opcao2 == 5) { // Densidade menor vence
    if (valorCarta1b < valorCarta2b) resultado1++;
    else if (valorCarta2b < valorCarta1b) resultado2++;
} else {
    if (valorCarta1b > valorCarta2b) resultado1++;
    else if (valorCarta2b > valorCarta1b) resultado2++;
}

// Soma dos atributos
float soma1 = valorCarta1 + valorCarta1b;
float soma2 = valorCarta2 + valorCarta2b;

// Exibição dos resultados
printf("\n===== RESULTADO =====\n");
printf("Carta 1: %s\nCarta 2: %s\n\n", Cidade1, Cidade2);
printf("Atributo 1 -> %.2f x %.2f\n", valorCarta1, valorCarta2);
printf("Atributo 2 -> %.2f x %.2f\n", valorCarta1b, valorCarta2b);
printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", Cidade1, soma1, Cidade2, soma2);

if (soma1 > soma2)
    printf("\n🏆 %s venceu a rodada!\n", Cidade1);
else if (soma2 > soma1)
    printf("\n🏆 %s venceu a rodada!\n", Cidade2);
else
    printf("\n🤝 Empate!\n");

return 0;
}