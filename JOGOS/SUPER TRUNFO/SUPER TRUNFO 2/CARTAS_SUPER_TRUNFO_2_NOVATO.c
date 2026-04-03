#include <stdio.h>

int  main(){
    //---VARIÁVEIS DA CARTA 1
char estado1;
char codigo1[4];
char cidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontos1;
float densidade1;
float pibpercapita1;

 //---VARIÁVEIS DA CARTA 2
char estado2;
char codigo2[4];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos2;
float densidade2;
float pibpercapita2;

// -- DADOS DA CARTA 1
estado1 = 'A';
populacao1 = 12325000;
area1 = 1521.11;
pib1 = 699.28;
pontos1 = 50;

//strings precisam de função especial para atribuição
//por isso inicializar direto na declaração
char codigo1_val[4] = "A01";
char cidade1_val[50] = "São Paulo";

// -- DADOS DA CARTA 2
estado2 = 'B';
populacao2 = 6748000;
area2 = 1200.25;
pib2 = 300.50;
pontos2 = 30;

char codigo2_val[4] = "B02";
char cidade2_val[50] = "Rio de Janeiro";

// --CÁLCULOS
densidade1 = (float)populacao1 / area1;
pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;

densidade2 = (float)populacao2 / area2;
pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;


//%d: Imprime um inteiro no formato decimal.

//%i: Equivalente a %d.

//%f: Imprime um número de ponto flutuante no formato padrão.

//%e: Imprime um número de ponto flutuante na notação científica.

//%c: Imprime um único caractere.

//%s: Imprime uma cadeia (string) de caracteres.

// -- EXIBIÇÃO DA CARTA 1
printf("=============================\n");
printf("           Carta 1           \n");
printf("=============================\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1_val);
printf("Nome da Cidade: %s\n", cidade1_val);
printf("População: %lu habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontos1);
printf("Densidade Populacional: %.2f hab km²\n", densidade1);
printf("PIB per capita: %.2f bilhões de reais\n", pibpercapita1);

// -- EXIBIÇÃO DA CARTA 2
printf("=============================\n");
printf("           Carta 2           \n");
printf("=============================\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2_val);
printf("Nome da Cidade: %s\n", cidade2_val);
printf("População: %lu habitantes\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f hab km²\n", densidade2);
printf("PIB per capita: %.2f reais bilhões de reais\n", pibpercapita2);

//COMPARAÇÃO POPULACIONAL
printf("\n=============================\n");
printf("        Comparação           \n");
printf("   Atributo: População       \n");
printf("=============================\n");

printf("Carta 1 - %s: %lu habitantes\n", cidade1_val, populacao1);
printf("Carta 2 - %s: %lu habitantes\n", cidade2_val, populacao2);

printf("\nResultado: ");

if (populacao1 > populacao2) {
    printf("Carta 1 (%s) venceu!\n", cidade1_val);
} else if (populacao2 > populacao1) {
    printf("Carta 2 (%s) venceu!\n", cidade2_val);
} else {
    printf("Empate!\n");
}

// DADOS FIXOS NO CÓDIGO > SEM scanf, REMOVENDO A INTERAÇÃO
// USUÁRIO NÃO PODE DIGITAR
// ATRIBUTO FIXO (COMPARAÇÃO) = POPULAÇÃO
// RESULTADO EXIBIDO COM if, else if , else 
return 0;
}