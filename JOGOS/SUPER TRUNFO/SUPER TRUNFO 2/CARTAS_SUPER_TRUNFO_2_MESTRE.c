#include <stdio.h>

int main(){

    // --- VARIÁVEIS DA CARTA 1 ---
    char cidade1[50];
    char codigo1[4];
    char estado1;
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapita1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char cidade2[50];
    char codigo2[4];
    char estado2;
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;

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

    printf("Qual a populacao da cidade? ");
    scanf("%lu", &populacao1);

    printf("Qual a area da cidade? (em km2): ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos a cidade tem? ");
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

    printf("Qual a populacao da cidade? ");
    scanf("%lu", &populacao2);

    printf("Qual a area da cidade? (em km2): ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade tem? ");
    scanf("%d", &pontos2);

    // --- CÁLCULOS ---
    densidade1    = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    densidade2    = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n=============================\n");
    printf("           Carta 1           \n");
    printf("=============================\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu hab\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n=============================\n");
    printf("           Carta 2           \n");
    printf("=============================\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu hab\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // --- VARIÁVEIS DE CONTROLE ---
    int opcao1, opcao2;
    float valor1_attr1, valor2_attr1;
    float valor1_attr2, valor2_attr2;
    float soma1, soma2;

    // --- MENU 1 ---
    printf("\n=============================\n");
    printf("   Escolha o 1o atributo     \n");
    printf("=============================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("=============================\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    // --- MENU 2 (sem o atributo já escolhido) ---
    printf("\n=============================\n");
    printf("   Escolha o 2o atributo     \n");
    printf("=============================\n");
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Populacional\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");
    printf("=============================\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    // --- VALIDA SE ESCOLHEU O MESMO ATRIBUTO ---
    if (opcao1 == opcao2) {
        printf("\nErro! Voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // --- PEGA OS VALORES DO 1º ATRIBUTO ---
    switch (opcao1) {
        case 1:
            valor1_attr1 = (float)populacao1;
            valor2_attr1 = (float)populacao2;
            break;
        case 2:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;
        case 3:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 4:
            valor1_attr1 = (float)pontos1;
            valor2_attr1 = (float)pontos2;
            break;
        case 5:
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;
        case 6:
            valor1_attr1 = pibpercapita1;
            valor2_attr1 = pibpercapita2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // --- PEGA OS VALORES DO 2º ATRIBUTO ---
    switch (opcao2) {
        case 1:
            valor1_attr2 = (float)populacao1;
            valor2_attr2 = (float)populacao2;
            break;
        case 2:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;
        case 3:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;
        case 4:
            valor1_attr2 = (float)pontos1;
            valor2_attr2 = (float)pontos2;
            break;
        case 5:
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;
        case 6:
            valor1_attr2 = pibpercapita1;
            valor2_attr2 = pibpercapita2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // --- SOMA DOS ATRIBUTOS ---
    if (opcao1 == 5) {
        soma1 = (1.0 / valor1_attr1) + valor1_attr2;
        soma2 = (1.0 / valor2_attr1) + valor2_attr2;
    } else if (opcao2 == 5) {
        soma1 = valor1_attr1 + (1.0 / valor1_attr2);
        soma2 = valor2_attr1 + (1.0 / valor2_attr2);
    } else {
        soma1 = valor1_attr1 + valor1_attr2;
        soma2 = valor2_attr1 + valor2_attr2;
    }

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\n=============================\n");
    printf("         Resultado           \n");
    printf("=============================\n");

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", cidade1, valor1_attr1);
    printf("%s: %.2f\n", cidade2, valor2_attr1);
    printf("Vencedor atributo 1: %s\n",
        opcao1 == 5
        ? (valor1_attr1 < valor2_attr1 ? cidade1 : cidade2)
        : (valor1_attr1 > valor2_attr1 ? cidade1 : cidade2));

    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", cidade1, valor1_attr2);
    printf("%s: %.2f\n", cidade2, valor2_attr2);
    printf("Vencedor atributo 2: %s\n",
        opcao2 == 5
        ? (valor1_attr2 < valor2_attr2 ? cidade1 : cidade2)
        : (valor1_attr2 > valor2_attr2 ? cidade1 : cidade2));

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    printf("\nVencedor final: ");
    if (soma1 > soma2) {
        printf("Carta 1 - %s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Carta 2 - %s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}