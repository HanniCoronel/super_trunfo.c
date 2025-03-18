#include <stdio.h>

int main() {

    // Criando variáveis separadas para a Carta1
    char codigo1[4], nome1[10], estado1[10];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Criando variáveis separadas para a Carta2
    char codigo2[4], nome2[10], estado2[10];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // Entrada de dados para a Carta1
    printf("Cadastro da primeira carta: \n");

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da cidade: ");
    scanf("%s", codigo1); 
    
    printf("População: ");
    scanf("%d", &populacao1); 
    
    printf("Área: ");
    scanf("%f", &area1); 
    
    printf("PIB: ");
    scanf("%f", &pib1); 
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos indicadores
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1;
   
    // Entrada de dados para a Carta2
    printf("Cadastro da segunda carta:\n");

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da cidade: ");
    scanf("%s", codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2;

    // Exibição dos dados cadastrados
    printf("Cartas cadastradas:\n");

    printf("\nCarta 1 - %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Comparar as cartas
    printf("\nComparação de Cartas:\n");
    
    printf("População: Carta %d venceu\n", (populacao1 > populacao2) + 1);
    printf("Área: Carta %d venceu\n", (area1 > area2) + 1);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) + 1);
    printf("Pontos Turísticos: Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) + 1);
    printf("Densidade Populacional: Carta %d venceu\n", (densidadePopulacional1 < densidadePopulacional2) + 1);
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) + 1);
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2) + 1);

    return 0;
}
