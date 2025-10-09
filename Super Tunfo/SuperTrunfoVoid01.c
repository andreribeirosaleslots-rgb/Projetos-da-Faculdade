#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[3];
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para calcular os valores derivados
void calcularValores(Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
    c->superPoder = c->populacao + c->area + c->pib + c->pontos + c->pibPerCapita + (1.0f / c->densidade);
}

// Função para ler os dados de uma carta
void lerCarta(Carta *c) {
    printf("\n=== Cadastro de Carta ===\n");
    printf("Estado (A-H): ");
    scanf("%s", c->estado);
    printf("Código (ex: A01): ");
    scanf("%s", c->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", c->cidade);
    printf("População: ");
    scanf("%lu", &c->populacao);
    printf("Área: ");
    scanf("%f", &c->area);
    printf("PIB: ");
    scanf("%f", &c->pib);
    printf("Pontos turísticos: ");
    scanf("%d", &c->pontos);

    calcularValores(c);
    printf("\n✅ Carta cadastrada com sucesso!\n");
}

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("\n📜 Carta %s - %s\n", c.codigo, c.cidade);
    printf("Estado: %s\n", c.estado);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.2f\n", c.pibPerCapita);
    printf("Super Poder: %.2f\n", c.superPoder);
}

// Função para comparar duas cartas
void compararCartas(Carta c1, Carta c2) {
    printf("\n=== Comparação ===\n");
    printf("População: Carta %d venceu\n", (c1.populacao > c2.populacao) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (c1.area > c2.area) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (c1.pib > c2.pib) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (c1.pontos > c2.pontos) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (c1.densidade < c2.densidade) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (c1.pibPerCapita > c2.pibPerCapita) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (c1.superPoder > c2.superPoder) ? 1 : 2);
}

int main() {
    Carta cartas[10];
    int qtdCartas = 0;
    int opcao;

    do {
        printf("\n===== SUPER TRUNFO =====\n");
        printf("1. Cadastrar carta\n");
        printf("2. Ver cartas cadastradas\n");
        printf("3. Comparar duas cartas\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (qtdCartas < 10) {
                    lerCarta(&cartas[qtdCartas]);
                    qtdCartas++;
                } else {
                    printf("❌ Limite de cartas atingido!\n");
                }
                break;

            case 2:
                if (qtdCartas == 0)
                    printf("⚠️ Nenhuma carta cadastrada ainda.\n");
                else
                    for (int i = 0; i < qtdCartas; i++)
                        exibirCarta(cartas[i]);
                break;

            case 3:
                if (qtdCartas < 2) {
                    printf("⚠️ Cadastre pelo menos duas cartas para comparar!\n");
                } else {
                    int c1, c2;
                    printf("Escolha o número da primeira carta (1-%d): ", qtdCartas);
                    scanf("%d", &c1);
                    printf("Escolha o número da segunda carta (1-%d): ", qtdCartas);
                    scanf("%d", &c2);
                    if (c1 >= 1 && c1 <= qtdCartas && c2 >= 1 && c2 <= qtdCartas && c1 != c2)
                        compararCartas(cartas[c1 - 1], cartas[c2 - 1]);
                    else
                        printf("❌ Índices inválidos!\n");
                }
                break;

            case 4:
                printf("\n👋 Saindo do jogo... Até logo, André!\n");
                break;

            default:
                printf("❌ Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
