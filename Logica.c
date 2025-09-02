#include <stdio.h>

int main() {
    // Atributos da carta 1
    char codigo1[10];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Atributos da carta 2
    char codigo2[10];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%9s", codigo1);  // %9s evita estouro de memória

    printf("Digite a populacao da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nDigite o codigo da segunda carta (ex: B02): ");
    scanf("%9s", codigo2);

    printf("Digite a populacao da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}

