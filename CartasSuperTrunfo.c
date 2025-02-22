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

    char menuOptions[6][50] = {"População", "Area", "PIB", "Pontos Turísticos", "Densidade Populacional", "PIB per Capita"};

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

    printf("-------------------------------------\n");

    printf("Cidade 1\n");
    printf("Codigo da cidade: %s\n", code_1);
    printf("Nome da cidade: %s\n", name_1);
    printf("Populacao da cidade: %d\n", population_1);
    printf("Area da cidade: %.2f\n", area_1);
    printf("PIB da cidade: %.2f\n", pib_1);
    printf("Numero de pontos turisticos da cidade: %d\n", touristAttractionAmount_1);

    printf("-------------------------------------\n");

    printf("Cidade 2\n");
    printf("Codigo da cidade: %s\n", code_2);
    printf("Nome da cidade: %s\n", name_2);
    printf("Populacao da cidade: %d\n", population_2);
    printf("Area da cidade: %.2f\n", area_2);
    printf("PIB da cidade: %.2f\n", pib_2);
    printf("Numero de pontos turisticos da cidade: %d\n", touristAttractionAmount_2);

    printf("-------------------------------------\n");

    printf("Escolha qual será o primeiro parâmetro de comparação entre as cartas: \n");
    for (int i = 0; i < 6; i++) {
        printf("%d - %s\n", i + 1, menuOptions[i]);
    }

    int firstChoice, secondChoice;
    scanf("%d", &firstChoice);

    if (firstChoice < 1 || firstChoice > 6) {
        printf("Opção inválida!\n");
        return 0;
    }

    printf("Escolha qual será o segundo parâmetro de comparação entre as cartas: \n");
    for (int i = 0; i < 6; i++) {
        if (i + 1 == firstChoice) {
            continue;
        }
        printf("%d - %s\n", i + 1, menuOptions[i]);
    }

    scanf("%d", &secondChoice);

    if (secondChoice < 1 || secondChoice > 6) {
        printf("Opção inválida!\n");
        return 0;
    }

    float firstParameter1, secondParameter1, firstParameter2, secondParameter2;

    switch (firstChoice) {
        case 1:
            firstParameter1 = population_1;
            firstParameter2 = population_2;
            break;
        case 2:
            firstParameter1 = area_1;
            firstParameter2 = area_2;
            break;
        case 3:
            firstParameter1 = pib_1;
            firstParameter2 = pib_2;
            break;
        case 4:
            firstParameter1 = touristAttractionAmount_1;
            firstParameter2 = touristAttractionAmount_2;
            break;
        case 5:
            firstParameter1 = populationDensity_1;
            firstParameter2 = populationDensity_2;
            break;
        case 6:
            firstParameter1 = pibPerCapita_1;
            firstParameter2 = pibPerCapita_2;
            break;
    }

    switch (secondChoice) {
        case 1:
            secondParameter1 = population_1;
            secondParameter2 = population_2;
            break;
        case 2:
            secondParameter1 = area_1;
            secondParameter2 = area_2;
            break;
        case 3:
            secondParameter1 = pib_1;
            secondParameter2 = pib_2;
            break;
        case 4:
            secondParameter1 = touristAttractionAmount_1;
            secondParameter2 = touristAttractionAmount_2;
            break;
        case 5:
            secondParameter1 = populationDensity_1;
            secondParameter2 = populationDensity_2;
            break;
        case 6:
            secondParameter1 = pibPerCapita_1;
            secondParameter2 = pibPerCapita_2;
            break;
    }

    float parameter1, parameter2;

    parameter1 = firstParameter1 + secondParameter1;
    parameter2 = firstParameter2 + secondParameter2;

    printf("As cidades eram: %s e %s\n", name_1, name_2);
    printf("Os atributos escolhidos foram: %s e %s\n", menuOptions[firstChoice - 1], menuOptions[secondChoice - 1]);
    printf("O valor do primeiro atributo de cada carta foi: %.2f e %.2f\n", firstParameter1, firstParameter2);
    printf("O valor do segundo atributo de cada carta foi: %.2f e %.2f\n", secondParameter1, secondParameter2);
    printf("A soma dos atributos de cada carta foram: %.2f e %.2f\n", parameter1, parameter2);

    if (parameter1 > parameter2) {
        printf("A cidade %s venceu!\n", name_1);
    } else if (parameter1 < parameter2) {
        printf("A cidade %s venceu!\n", name_2);
    } else {
        printf("As cidades empataram!\n");
    }

    return 0;
}
