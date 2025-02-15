#include <stdio.h>

int main() {
    char codigo_cidade[4]; // Ajustado para armazenar o código no formato "A01"
    char nome_cidade[50];
    long populacao;
    float area_territorial;
    double PIB;
    int qtd_pontos_turisticos;
    float densidade_populacional;
    double PIB_per_capita;

    printf("*********** Super Trunfo - Países ***********\n\n");
    printf("Iniciando cadastramento das cartas das cidades.\n\n");
    printf("Abaixo, digite os dados referentes à carta da cidade que deseja cadastrar.\n\n");

    printf("Digite o código da cidade (formato A01): ");
    scanf("%3s", codigo_cidade); // Lê até 3 caracteres para o código

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade); // Lê até 49 caracteres, incluindo espaços

    printf("Digite o número de habitantes: ");
    scanf("%ld", &populacao);

    printf("Digite quantos quilômetros quadrados a cidade possui: ");
    scanf("%f", &area_territorial);

    printf("Digite o valor do PIB da cidade: ");
    scanf("%lf", &PIB);

    printf("Digite a quantidade de pontos turísticos que a cidade possui: ");
    scanf("%d", &qtd_pontos_turisticos);

    // Cálculo das novas propriedades
    densidade_populacional = populacao / area_territorial;
    PIB_per_capita = PIB / populacao;

    printf("\n***** Cidade cadastrada com sucesso! *****\n\n");
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %ld habitantes\n", populacao);
    printf("Área territorial: %.2f km²\n", area_territorial);
    printf("PIB: %.2lf\n", PIB);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2lf\n", PIB_per_capita);
    printf("\n********************************************\n");

    return 0;
}
