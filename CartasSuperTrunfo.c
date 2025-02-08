#include <stdio.h>

int main() {
    int codigo_cidade;
    char nome_cidade[50];
    long populacao;
    float area_territorial;
    double PIB;
    int qtd_pontos_turisticos;

    printf("***********Super Trunfo - Países***********\n\n");
    printf("Iniciando cadastramento das cartas das cidades.\n\n");
    printf("Abaixo digite os dados referente à carta da cidade que deseja cadastrar.\n\n");

    printf("Digite o código da cidade: ");
    scanf("%d", &codigo_cidade);

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

    printf("\n***** Cidade cadastrada com sucesso! *****\n\n");
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Código da cidade: %d\n", codigo_cidade);
    printf("População: %ld habitantes\n", populacao);
    printf("Área territorial: %.2f km²\n", area_territorial);
    printf("PIB: %.2lf\n", PIB);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pontos_turisticos);
    printf("\n***************************************");
    
    return 0;
}
