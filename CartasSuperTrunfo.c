#include <stdio.h>
#include <string.h>

int main () {

    //Definição das variáveis
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
    printf("Número de pontos turísticos: %d \n", turisticos);

    char estado2[5];
    char codcarta2[5];
    char nome2[25];
    unsigned long int populacao2;
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
    printf("Número de pontos turísticos: %d \n", turisticos2);

    return 0;
}
