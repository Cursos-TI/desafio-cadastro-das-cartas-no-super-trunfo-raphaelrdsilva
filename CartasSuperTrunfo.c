#include <stdio.h>
#include <string.h>

int main () {

//INSERÇÃO DE DADOS PRIMEIRA CARTA
    char estado[5];
    char codcarta[5];
    char nome[25];
    unsigned long int populacao;
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
    scanf("%lu", &populacao);

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
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", numponturi);

    float pibpercap1 = pib / populacao;
    float densidade1 = populacao / area;
    float superpoder1 = populacao + area + pib + pibpercap1 + densidade1 + numponturi;

    printf("PIB per capta: %.2f \n", pibpercap1);
    printf("Densidade populacional(Km²): %.2f \n", densidade1);
    printf("Super Poder: %.2f \n", superpoder1);
    
//INSERÇÃO DE DADOS SEGUNDA CARTA 
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
    scanf("%lu", &populacao2);

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
    float superpoder2 = populacao2 + area2 + pib2 + pibpercap2 + densidade2 + numponturi2;

    printf("Super Poder: %.2f \n", superpoder2);
    printf("PIB per capta: %.2f \n", pibpercap2);
    printf("Densidade populacional(Km²): %.2f \n", densidade2);

    //COMPARAÇÃO DE CARTAS
    int compPopulacao = populacao > populacao2;
    int compArea = area > area2;
    int compPIB = pib > pib2;
    int compPonturi = numponturi > numponturi2;
    int compDensidade = densidade1 > densidade2;
    int compPIBpercapta = pibpercap1 > pibpercap2;
    int compSuperPoder = superpoder1 > superpoder2;

    printf("Comparação de Cartas \n");
    printf("População: CARTA 1 VENCEU? %d \n", compPopulacao);
    printf("Área: CARTA 1 VENCEU? %d \n", compArea);
    printf("PIB: CARTA 1 VENCEU? %d \n", compPIB);
    printf("Pontos Turísticos: CARTA 1 VENCEU? %d \n", compPonturi);
    printf("Densidade Populacional: CARTA 1 VENCEU? %d \n", compDensidade);
    printf("PIB per Capta: CARTA 1 VENCEU? %d \n", compPIBpercapta);
    printf("Super Poder: CARTA 1 VENCEU? %d \n", compSuperPoder);

    return 0;
}