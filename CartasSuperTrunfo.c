#include <stdio.h>

int main() {
    char state_1[50], state_2[50];
    char code_1[3], code_2[3];
    char name_1[255], name_2[255];
    int population_1, population_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int touristAttractionAmount_1, touristAttractionAmount_2;
    float populationDensity_1, populationDensity_2;
    float pibPerCapita_1, pibPerCapita_2;

    printf("Digite o codigo do estado: \n");
    scanf("%s", state_1);
    
    printf("Digite o codigo da cidade: \n");
    scanf("%s", code_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", name_1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &population_1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area_1);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib_1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &touristAttractionAmount_1);

    populationDensity_1 = population_1 / area_1;
    pibPerCapita_1 = pib_1 / population_1;
    
    printf("Codigo da cidade: %s\n", code_1);
    printf("Nome da cidade: %s\n", name_1);
    printf("Populacao da cidade: %d\n", population_1);
    printf("Area da cidade: %.2f\n", area_1);
    printf("PIB da cidade: %.2f\n", pib_1);
    printf("Numero de pontos turisticos da cidade: %d\n", touristAttractionAmount_1);

    printf("-------------------------------------\n");

    printf("Digite o codigo do estado: \n");
    scanf("%s", state_2);
    
    printf("Digite o codigo da cidade: \n");
    scanf("%s", code_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", name_2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &population_2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area_2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib_2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &touristAttractionAmount_2);

    populationDensity_2 = population_2 / area_2;
    pibPerCapita_2 = pib_2 / population_2;
    
    printf("Codigo da cidade: %s\n", code_2);
    printf("Nome da cidade: %s\n", name_2);
    printf("Populacao da cidade: %d\n", population_2);
    printf("Area da cidade: %.2f\n", area_2);
    printf("PIB da cidade: %.2f\n", pib_2);
    printf("Numero de pontos turisticos da cidade: %d\n", touristAttractionAmount_2);

    printf("-------------------------------------\n");

    printf("Escolha qual será o parâmetro de comparação entre as cartas: \n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");

    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Nome das cidades: %s, %s\n", name_1, name_2);
            printf("Parâmetro selecionado: População\n");
            printf("Valores das cartas: %d, %d\n", population_1, population_2);
            if (population_1 > population_2) {
                printf("Cidade %s Venceu!\n", name_1);
            } else if (population_2 > population_1) {
                printf("Cidade %s Venceu!\n", name_2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Nome das cidades: %s, %s\n", name_1, name_2);
            printf("Parâmetro selecionado: Area\n");
            printf("Valores das cartas: %.2f, %.2f\n", area_1, area_2);
            if (area_1 > area_2) {
                printf("Cidade %s Venceu!\n", name_1);
            } else if (area_2 > area_1) {
                printf("Cidade %s Venceu!\n", name_2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Nome das cidades: %s, %s\n", name_1, name_2);
            printf("Parâmetro selecionado: PIB\n");
            printf("Valores das cartas: %.2f, %.2f\n", pib_1, pib_2);
            if (pib_1 > pib_2) {
                printf("Cidade %s Venceu!\n", name_1);
            } else if (pib_2 > pib_1) {
                printf("Cidade %s Venceu!\n", name_2);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case 4:
            printf("Nome das cidades: %s, %s\n", name_1, name_2);
            printf("Parâmetro selecionado: Número de pontos turísticos\n");
            printf("Valores das cartas: %d, %d\n", touristAttractionAmount_1, touristAttractionAmount_2);
            if (touristAttractionAmount_1 > touristAttractionAmount_2) {
                printf("Cidade %s Venceu!\n", name_1);
            } else if (touristAttractionAmount_2 > touristAttractionAmount_1) {
                printf("Cidade %s Venceu!\n", name_2);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case 5:
            printf("Nome das cidades: %s, %s\n", name_1, name_2);
            printf("Parâmetro selecionado: Densidade Populacional\n");
            printf("Valores das cartas: %.2f, %.2f\n", populationDensity_1, populationDensity_2);
            if (populationDensity_1 < populationDensity_2) {
                printf("Cidade %s Venceu!\n", name_1);
            } else if (populationDensity_2 > populationDensity_1) {
                printf("Cidade %s Venceu!\n", name_2);
            } else {
                printf("EMPATE!\n");
            }
            break;
        case 6:
            printf("Nome das cidades: %s, %s\n", name_1, name_2);
            printf("Parâmetro selecionado: PIB per capita\n");
            printf("Valores das cartas: %.2f, %.2f\n", pibPerCapita_1, pibPerCapita_2);
            if (pibPerCapita_1 > pibPerCapita_2) {
                printf("Cidade %s Venceu!\n", name_1);
            } else if (pibPerCapita_2 > pibPerCapita_1) {
                printf("Cidade %s Venceu!\n", name_2);
            } else {
                printf("EMPATE!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
