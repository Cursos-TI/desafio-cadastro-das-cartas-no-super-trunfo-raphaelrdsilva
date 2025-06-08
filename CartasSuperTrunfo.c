#include <stdio.h>
#include <string.h>

int main () {

    // DEFINIÇÃO DE VARIÁVEIS DA CARTA 1
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

    //      DEFINIÇÃO DE VARIÁVEIS DA CARTA 2
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
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", numponturi2);

    //      CÁLCULOS DE ATRIBUTOS ADICIONADOS POSTERIORMENTE
    float pibpercap2 = pib2 / populacao2;
    float densidade2 = populacao2 / area2;
    float superpoder2 = populacao2 + area2 + pib2 + pibpercap2 + densidade2 + numponturi2;

    printf("Super Poder: %.2f \n", superpoder2);
    printf("PIB per capta: %.2f \n", pibpercap2);
    printf("Densidade populacional(Km²): %.2f \n", densidade2);

    //      MENU UTILIZANDO SWITCH COM COMPARAÇÃO DE ATRIBUTO DENTRO DE CADA CASE
    int atributo;

    printf("Escolha o atributo a ser comparado:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turísticos\n");
    printf("5.Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        if (populacao > populacao2) {
        printf("População: Carta 1 venceu!\n");
        } else if (populacao2 > populacao) {
        printf("População: Carta 2 venceu!\n");
        } else {
        printf("Empate!\n");
        }
        break;
    case 2:
        if (area > area2) {
        printf("Área: Carta 1 venceu!\n");
        } else if (area2 > area) {
        printf("Área: Carta 2 venceu!\n");
        } else {
        printf("Empate!\n");
        }
        break;
    case 3:
        if (pib > pib2) {
        printf("PIB: Carta 1 venceu!\n");
        } else if (pib2 > pib) {
        printf("PIB: Carta 2 venceu!\n");
        } else {
        printf("Empate!\n");
        }
        break;
    case 4:
        if (numponturi > numponturi2) {
        printf("Número de pontos turisticos: Carta 1 venceu!\n");
        } else if (numponturi2 > numponturi) {
        printf("Número de pontos turisticos: Carta 2 venceu!\n");
        } else {
        printf("Empate!\n");
        }
        break;
    case 5:
        if (densidade1 < densidade2) {
        printf("Densidade populacional: Carta 1 venceu!\n");
        } else if (densidade2 > densidade1) {
        printf("Densidade populacional: Carta 2 venceu!\n");
        } else {
        printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}
