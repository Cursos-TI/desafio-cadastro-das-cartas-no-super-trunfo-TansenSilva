#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
typedef struct {
    char codigo[4];
    char nome[50];
    long populacao;
    float area;
    double PIB;
    int pontos_turisticos;
    float densidade_populacional;
    double PIB_per_capita;
    double super_poder;
} Carta;

// Função para calcular propriedades derivadas
void calcular_propriedades(Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->PIB_per_capita = c->PIB / c->populacao;
    c->super_poder = c->populacao + c->area + c->PIB + c->pontos_turisticos + c->densidade_populacional + c->PIB_per_capita;
}

// Função para comparar duas cartas
void comparar_cartas(Carta c1, Carta c2) {
    printf("\nComparando %s e %s:\n", c1.nome, c2.nome);

    // Densidade Populacional (menor é melhor)
    if (c1.densidade_populacional < c2.densidade_populacional)
        printf("Densidade Populacional: %s vence\n", c1.nome);
    else
        printf("Densidade Populacional: %s vence\n", c2.nome);

    // População (maior é melhor)
    if (c1.populacao > c2.populacao)
        printf("População: %s vence\n", c1.nome);
    else
        printf("População: %s vence\n", c2.nome);

    // Área (maior é melhor)
    if (c1.area > c2.area)
        printf("Área: %s vence\n", c1.nome);
    else
        printf("Área: %s vence\n", c2.nome);

    // PIB (maior é melhor)
    if (c1.PIB > c2.PIB)
        printf("PIB: %s vence\n", c1.nome);
    else
        printf("PIB: %s vence\n", c2.nome);

    // Pontos Turísticos (maior é melhor)
    if (c1.pontos_turisticos > c2.pontos_turisticos)
        printf("Pontos Turísticos: %s vence\n", c1.nome);
    else
        printf("Pontos Turísticos: %s vence\n", c2.nome);

    // PIB per Capita (maior é melhor)
    if (c1.PIB_per_capita > c2.PIB_per_capita)
        printf("PIB per Capita: %s vence\n", c1.nome);
    else
        printf("PIB per Capita: %s vence\n", c2.nome);

    // Super Poder (maior é melhor)
    if (c1.super_poder > c2.super_poder)
        printf("Super Poder: %s vence\n", c1.nome);
    else
        printf("Super Poder: %s vence\n", c2.nome);
}

int main() {
    Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);

        printf("Digite o código da cidade (formato A01): ");
        scanf("%3s", cartas[i].codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %49[^\n]", cartas[i].nome);

        printf("Digite o número de habitantes: ");
        scanf("%ld", &cartas[i].populacao);

        printf("Digite a área da cidade em km²: ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB da cidade: ");
        scanf("%lf", &cartas[i].PIB);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        // Calcular propriedades derivadas
        calcular_propriedades(&cartas[i]);
    }

    // Comparar as duas cartas cadastradas
    comparar_cartas(cartas[0], cartas[1]);

    return 0;
}
