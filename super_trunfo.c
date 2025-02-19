#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    double densidade1, densidade2, pibCapita1, pibCapita2;
    unsigned long int super_poder1, super_poder2;

    // Entrada dos dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf(" %s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", &nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);


    // Entrada dos dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf(" %s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", &nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibCapita1 = pib1 / populacao1;
    pibCapita2 = pib2 / populacao2;
        
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibCapita1 + densidade1;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibCapita2 + densidade2;

    // Exibição dos dados 
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densindade Populacional: %.21lf\n", densidade1);
    printf("PIB per Capita: %.21lf\n", pibCapita1);
    printf("Super Poder: %lu\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.21lf\n", densidade2);
    printf("PIB per Capita: %.21lf\n", pibCapita2);
    printf("Super Poder: %lu\n", super_poder2);

    // Compáração das Cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta %d venceu\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta %d venceu\n", super_poder1 > super_poder2);


    return 0;
}
