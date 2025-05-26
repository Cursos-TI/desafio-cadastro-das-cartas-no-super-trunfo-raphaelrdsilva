#include <stdio.h>
#include <string.h>

int main () {

    char estado[5];
    char codcarta[5];
    char nome[25];
    int populacao;
    float area;
    float pib;
    int numponturi;

    printf("Carta 1 \n");

    printf("Estado: ");
    scanf("%s", estado);

    printf("Código da carta: ");
    scanf("%s", codcarta);

    printf("Nome da cidade: ");
    getchar();
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numponturi);

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codcarta);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", numponturi);

    float pibpercap1 = pib / populacao;
    float densidade1 = populacao / area;

    printf("PIB per capta: %.2f reais \n", pibpercap1);
    printf("Densidade populacional(Km²): %.2f Hab/Km² \n", densidade1);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    char estado2[5];
    char codcarta2[5];
    char nome2[25];
    int populacao2;
    float area2;
    float pib2;
    int numponturi2;

    printf("Carta 2 \n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codcarta2);

    printf("Nome da cidade: ");
    getchar();
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numponturi2);

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codcarta2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", numponturi2);

    float pibpercap2 = pib2 / populacao2;
    float densidade2 = populacao2 / area2;

    printf("PIB per Capta: %.2f reais \n", pibpercap2);
    printf("Densidade populacional(Km²): %.2f hab/Km² \n", densidade2);

    return 0;
}
