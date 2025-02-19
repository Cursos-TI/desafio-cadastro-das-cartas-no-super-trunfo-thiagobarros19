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

    if (pibPerCapita_1 > pibPerCapita_2) {
        printf("Cidade %s Venceu!\n", name_1);
    } else {
        printf("Cidade %s Venceu!\n", name_2);
    }

    return 0;
}
