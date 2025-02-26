#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

    printf("Insira o Estado: \n");
    scanf("%s", &estado1);

    printf("Insira o codigo: \n");
    scanf("%s", &codigo1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome_da_cidade1);

    printf("Insira a populacao: \n");
    scanf("%d", &populacao1);

    printf("Insira a area: \n");
    scanf("%f", &area1);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB1);

    printf("Insira o numero de ponto turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n\n\n", numero_de_pontos_turisticos1);

    printf("Insira o Estado: \n");
    scanf("%s", &estado2);

    printf("Insira o codigo: \n");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Insira a populacao: \n");
    scanf("%d", &populacao2);

    printf("Insira a area: \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB2);

    printf("Insira o numero de ponto turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);



    return 0;

}
