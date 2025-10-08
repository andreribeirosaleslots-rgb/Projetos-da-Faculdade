#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Super Trunfo\nObjetivo: tenha a carta mais forte.\nAss: André Ribeiro\n\n");

    // Variáveis da primeira carta
    char Estado1[20], Codigo1[4], Cidade1[30];
    unsigned long int Populacao1;
    int PontosTuristicos1, opcao;
    float Area1, PIB1, Densidade1, PIBPerCapita1, SuperPoder1;

    // Variáveis da segunda carta
    char Estado2[20], Codigo2[4], Cidade2[30];
    unsigned long int Populacao2;
    int PontosTuristicos2, opcao2;
    float Area2, PIB2, Densidade2, PIBPerCapita2, SuperPoder2;

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

    if(Populacao1 > Populacao2){
    printf("Resultado: Carta %d venceu!\n",Populacao1 > Populacao2);}
    else{
    printf("Carta %d perdeu!\n",(Populacao1 < Populacao2));}

    //Menu de Comparação do jogo
    printf("Menu De Comparaçao\n");
    printf("1. População\n");
    printf("2. Àrea\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Desnsidade Demográfica\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao2);

    switch (opcao2)
    {
    case 1:    
    printf("Atributo: População\n");
    printf("%s: %d habitantes\n", Estado1, Populacao1);
    printf("%s: %d habitantes\n", Estado2, Populacao2);
    if (Populacao1 > Populacao2)
    printf("Vencedor: %s\n", Estado1);
    else if (Populacao1 > Populacao2)
    printf("Vencedor: %s\n", Estado2);
     else
    printf("Empate!\n");
    break;

    case 2: 
    printf("Atributo: Área\n");
    printf("%s: %.2f km²\n",Estado1, Area1);
    printf("%s: %.2f km²\n",Estado2, Area2);
    if (Area1 > Area2)
    printf("Vencedor: %s\n", Estado1);
    else if (Area2 > Area1)
    printf("Vencedor: %s\n", Estado2);
    else
    printf("Empate!\n");
    break;

    case 3:     
    printf("Atributo: PIB\n");
    printf("%s: %.2f bilhões\n", Estado1, PIB1);
    printf("%s: %.2f bilhões\n", Estado2, PIB2);
    if (PIB1 > PIB2)
    printf("Vencedor: %s\n", Estado1);
    else if (PIB2 > PIB1)
    printf("Vencedor: %s\n", Estado2);
    else
    printf("Empate!\n");
    break;

    case 4:     
    printf("Atributo: Pontos Turísticos\n");
    printf("%s: %d bilhões\n", Estado1, PontosTuristicos1 );
    printf("%s: %d bilhões\n", Estado2, PontosTuristicos2);
    if (PontosTuristicos1 > PontosTuristicos2)
    printf("Vencedor: %s\n", Estado1);
    else if (PontosTuristicos1 > PontosTuristicos2)
    printf("Vencedor: %s\n", Estado2);
    else
    printf("Empate!\n");
    break;

    case 5:     
    printf("Atributo: Densidade Demográfica\n");
    printf("%s: %.4f hab/km²\n", Estado1, Densidade1);
    printf("%s: %.4f hab/km²\n", Estado2, Densidade2);
    if (Densidade1 < Densidade2)
    printf("Vencedor: %s (menor densidade vence)\n", Estado1);
    else if (Densidade2 < Densidade1)
    printf("Vencedor: %s (menor densidade vence)\n", Estado2);
    else
    printf("Empate!\n");
    break;

    default:    printf("Opção invalida!\n");
    break;
    }

return 0;
}