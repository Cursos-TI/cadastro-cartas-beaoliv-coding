//CRIAÇÃO CARTAS NIVEL MESTRE SUPER TRUNFO

#include <stdio.h>

int main(){

    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("=============================\n");
    printf("      Cadastro da Carta 1    \n");
    printf("=============================\n\n");

    printf("Qual o estado? (letra A a H): ");
    scanf(" %c", &estado1);

    printf("Qual o codigo da carta? (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Qual o nome da cidade? ");
    scanf(" %49[^\n]", cidade1);

    printf("Qual a população da cidade? ");
    scanf("%lu", &populacao1);

    printf("Qual a área da cidade? (em km2): ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade tem? ");
    scanf("%d", &pontos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n=============================\n");
    printf("      Cadastro da Carta 2    \n");
    printf("=============================\n\n");

    printf("Qual o estado? (letra A a H): ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da carta? (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Qual o nome da cidade? ");
    scanf(" %49[^\n]", cidade2);

    printf("Qual a população da cidade? ");
    scanf("%lu", &populacao2);

    printf("Qual a área da cidade? (em km2): ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade tem? ");
    scanf("%d", &pontos2);

    // --- CÁLCULOS CARTA 1 ---
    densidade1    = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    superpoder1   = (float)populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0 / densidade1);

    // --- CÁLCULOS CARTA 2 ---
    densidade2    = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;
    superpoder2   = (float)populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0 / densidade2);

    // --- EXIBIÇÃO DA CARTA 1 ---
    printf("\n=============================\n");
    printf("           Carta 1           \n");
    printf("=============================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // --- EXIBIÇÃO DA CARTA 2 ---
    printf("\n=============================\n");
    printf("           Carta 2           \n");
    printf("=============================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // --- COMPARAÇÕES ---
    printf("\n=============================\n");
    printf("      Comparação de Cartas   \n");
    printf("=============================\n");

    printf("População: Carta %d venceu (%d)\n",
        populacao1 > populacao2 ? 1 : 2,
        populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n",
        area1 > area2 ? 1 : 2,
        area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
        pib1 > pib2 ? 1 : 2,
        pib1 > pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
        pontos1 > pontos2 ? 1 : 2,
        pontos1 > pontos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        densidade1 < densidade2 ? 1 : 2,
        densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
        pibpercapita1 > pibpercapita2 ? 1 : 2,
        pibpercapita1 > pibpercapita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
        superpoder1 > superpoder2 ? 1 : 2,
        superpoder1 > superpoder2);

    return 0;
}
