#include <stdio.h>

int main() {

    // Criando variáveis separadas para a Carta1
    char codigo1[4], nome1[10], estado1[10];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Criando variáveis separadas para a Cart2
    char codigo2[4], nome2[10], estado2[10];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

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

    // Exibição dos dados cadastrados
    printf("Cartas cadastradas:\n");

    printf("\nCarta 1 - %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %2f km²\n", area1);
    printf("PIB: %2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %2f km²\n", area2);
    printf("PIB: %2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    
    return 0;
}
