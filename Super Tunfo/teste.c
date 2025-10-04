#include <stdio.h>

// Função para ler os dados de uma carta
void lerCarta(char estado[], char codigo[], char cidade[], unsigned long int *populacao,
              float *area, float *pib, int *pontos) {
    printf("Estado (A-H): "); scanf("%s", estado);
    printf("Código (ex: A01): "); scanf("%s", codigo);
    printf("Nome da cidade: "); scanf(" %[^\n]s", cidade);
    printf("População: "); scanf("%lu", populacao);
    printf("Área: "); scanf("%f", area);
    printf("PIB: "); scanf("%f", pib);
    printf("Pontos turísticos: "); scanf("%d", pontos);
}

// Função para calcular densidade, PIB per capita e super poder
void calcularValores(unsigned long int populacao, float area, float pib, int pontos,
                     float *densidade, float *pibPerCapita, float *superPoder) {
    *densidade = populacao / area;
    *pibPerCapita = pib / populacao;
    *superPoder = populacao + area + pib + pontos + *pibPerCapita + (1.0f / *densidade);
}

int main() {
    printf("Super Trunfo - Objetivo: tenha a carta mais forte.\nAss: André Ribeiro\n\n");

    // Variáveis da Carta 1
    char Estado1[20], Codigo1[4], Cidade1[30];
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Area1, PIB1, Densidade1, PIBPerCapita1, SuperPoder1;

    // Variáveis da Carta 2
    char Estado2[20], Codigo2[4], Cidade2[30];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Area2, PIB2, Densidade2, PIBPerCapita2, SuperPoder2;

    printf("=== Primeira Carta ===\n");
    lerCarta(Estado1, Codigo1, Cidade1, &Populacao1, &Area1, &PIB1, &PontosTuristicos1);
    calcularValores(Populacao1, Area1, PIB1, PontosTuristicos1, &Densidade1, &PIBPerCapita1, &SuperPoder1);

    printf("\n=== Segunda Carta ===\n");
    lerCarta(Estado2, Codigo2, Cidade2, &Populacao2, &Area2, &PIB2, &PontosTuristicos2);
    calcularValores(Populacao2, Area2, PIB2, PontosTuristicos2, &Densidade2, &PIBPerCapita2, &SuperPoder2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2 ? 1 : 2), (Populacao1 > Populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2 ? 1 : 2), (Area1 > Area2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2 ? 1 : 2), (PIB1 > PIB2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2 ? 1 : 2), (PontosTuristicos1 > PontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (Densidade1 < Densidade2 ? 1 : 2), (Densidade1 < Densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBPerCapita1 > PIBPerCapita2 ? 1 : 2), (PIBPerCapita1 > PIBPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2 ? 1 : 2), (SuperPoder1 > SuperPoder2 ? 1 : 0));

    return 0;
}
