//JOGO SUPER TRUNFO 2 - AVENTUREIRO

#include <stdio.h>

int main(){

//DADOS FIXOS CARTA 1
char cidade1[50] = "Sao Paulo";
    char codigo1[4]  = "A01";
    char estado1     = 'A';
    unsigned long int populacao1 = 12325000;
    float area1      = 1521.11;
    float pib1       = 699.28;
    int pontos1      = 50;
    float densidade1;
    float pibpercapita1;

    // --- DADOS FIXOS DA CARTA 2 ---
    char cidade2[50] = "Rio de Janeiro";
    char codigo2[4]  = "B02";
    char estado2     = 'B';
    unsigned long int populacao2 = 6748000;
    float area2      = 1200.25;
    float pib2       = 300.50;
    int pontos2      = 30;
    float densidade2;
    float pibpercapita2;

// --- CÁLCULOS ---
    densidade1    = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    densidade2    = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("=============================\n");
    printf("           Carta 1           \n");
    printf("=============================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu hab\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n=============================\n");
    printf("           Carta 2           \n");
    printf("=============================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu hab\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

// MENU INTERATIVO
int opcao;

   printf("\n=============================\n");
    printf("   Escolha o atributo        \n");
    printf("=============================\n");

    printf("1- Populacao\n");
    printf("2- Area\n");
    printf("3- PIB\n");
    printf("4- Pontos Turisticos\n");
    printf("5- Densidade\n");
    printf("6- PIB per Capita\n");
    printf("=============================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

     // --- COMPARAÇÃO COM SWITCH ---
    printf("\n=============================\n");
    printf("      Resultado              \n");
    printf("=============================\n");

      switch (opcao) {

        case 1: // POPULAÇÃO
            printf("Atributo: Populacao\n");
            printf("%s: %lu hab\n", cidade1, populacao1);
            printf("%s: %lu hab\n", cidade2, populacao2);
            printf("\nVencedor: ");
            if (populacao1 > populacao2) {
                printf("Carta 1 - %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Carta 2 - %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

             case 2: // ÁREA
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);
            printf("\nVencedor: ");
            if (area1 > area2) {
                printf("Carta 1 - %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Carta 2 - %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", cidade1, pib1);
            printf("%s: %.2f bilhoes\n", cidade2, pib2);
            printf("\nVencedor: ");
            if (pib1 > pib2) {
                printf("Carta 1 - %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Carta 2 - %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            printf("\nVencedor: ");
            if (pontos1 > pontos2) {
                printf("Carta 1 - %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Carta 2 - %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // DENSIDADE → menor vence!
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);
            printf("\nVencedor: ");
            if (densidade1 < densidade2) {
                printf("Carta 1 - %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Carta 2 - %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // PIB PER CAPITA
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", cidade1, pibpercapita1);
            printf("%s: %.2f reais\n", cidade2, pibpercapita2);
            printf("\nVencedor: ");
            if (pibpercapita1 > pibpercapita2) {
                printf("Carta 1 - %s venceu!\n", cidade1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("Carta 2 - %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha entre 1 e 6.\n");
    }

    return 0;
}


