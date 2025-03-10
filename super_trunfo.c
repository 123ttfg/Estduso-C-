#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    double densidade1, densidade2, pibCapita1, pibCapita2;

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
    scanf("%d", &populacao2);
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


    // Resultado
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numeros de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibCapita1) ;
       
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numeros de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibCapita2) ;
    
    // Escolha dos atributos para comparação
    int escolha;

    printf("== Escolha os atributos que você deseja comparar ==\n");
    printf("1. População: \n");
    printf("2. Área: \n");
    printf("3. PIB: \n");
    printf("4. Número de pontos turisticos: \n");
    printf("5. Densidade populacional: \n");
    printf("6. PIB Per Capita: \n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    // Switch com operador ternário para determinar o vencedor
    switch (escolha) {
        case 1:
            printf("Carta 1: %s - %d Habitantes\n", nome1, populacao1);
            printf("Carta 2: %s - %d Habitantes\n", nome2, populacao2);
            printf("%s\n", (populacao1 > populacao2) ? "Carta 1 Venceu" : (populacao1 < populacao2) ? "Carta 2 Venceu" : "Empate");
            break;
        case 2:
            printf("Carta 1: %s - %.2f km²\n", nome1, area1);
            printf("Carta 2: %s - %.2f km²\n", nome2, area2);
            printf("%s\n", (area1 > area2) ? "Carta 1 Venceu" : (area1 < area2) ? "Carta 2 Venceu" : "Empate");
            break;
        case 3:
            printf("Carta 1: %s - %.2f Bilhões\n", nome1, pib1);
            printf("Carta 2: %s - %.2f Bilhões\n", nome2, pib2);
            printf("%s\n", (pib1 > pib2) ? "Carta 1 Venceu" : (pib1 < pib2) ? "Carta 2 Venceu" : "Empate");
            break;
        case 4:
            printf("Carta 1: %s - %d Pontos Turísticos\n", nome1, pontos_turisticos1);
            printf("Carta 2: %s - %d Pontos Turísticos\n", nome2, pontos_turisticos2);
            printf("%s\n", (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 Venceu" : (pontos_turisticos1 < pontos_turisticos2) ? "Carta 2 Venceu" : "Empate");
            break;
        case 5:
            printf("Carta 1: %s - %.2f Densidade Populacional\n", nome1, densidade1);
            printf("Carta 2: %s - %.2f Densidade Populacional\n", nome2, densidade2);
            printf("%s\n", (densidade1 > densidade2) ? "Carta 1 Venceu" : (densidade1 < densidade2) ? "Carta 2 Venceu" : "Empate");
            break;
        case 6:
            printf("Carta 1: %s - %.6f PIB per Capita\n", nome1, pibCapita1);
            printf("Carta 2: %s - %.6f PIB per Capita\n", nome2, pibCapita2);
            printf("%s\n", (pibCapita1 > pibCapita2) ? "Carta 1 Venceu" : (pibCapita1 < pibCapita2) ? "Carta 2 Venceu" : "Empate");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}

        
