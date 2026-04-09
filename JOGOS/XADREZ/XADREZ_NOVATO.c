#include <stdio.h>

int main(){

    int direcao, casa, i;

    // =============================
    //           TORRE
    // =============================
    printf("=============================\n");
    printf("         PECA (TORRE)        \n");
    printf("=============================\n\n");
    printf("1. ESQUERDA\n");
    printf("2. DIREITA\n");
    printf("3. CIMA\n");
    printf("4. BAIXO\n\n");
    printf("ESCOLHA UMA DIRECAO: ");
    scanf("%d", &direcao);

    if(direcao < 1 || direcao > 4){
        printf("OPCAO INVALIDA!\n");
        return 0;
    }

    printf("ESCOLHA A QUANTIDADE DE CASAS (1 a 8): ");
    scanf("%d", &casa);

    if(casa < 1 || casa > 8){
        printf("OPCAO INVALIDA!\n");
        return 0;
    }

    printf("\nEFETUANDO MOVIMENTO...\n\n");

    i = 1;
    do {
        switch(direcao){
            case 1: printf("ESQUERDA - Casa %d\n", i); break;
            case 2: printf("DIREITA - Casa %d\n", i);  break;
            case 3: printf("CIMA - Casa %d\n", i);     break;
            case 4: printf("BAIXO - Casa %d\n", i);    break;
        }
        i++;
    } while(i <= casa);

    printf("\nMOVIMENTO EFETUADO!\n");

    // =============================
    //           BISPO
    // =============================
    printf("\n=============================\n");
    printf("         PECA (BISPO)        \n");
    printf("=============================\n\n");
    printf("1. DIAGONAL SUPERIOR ESQUERDA\n");
    printf("2. DIAGONAL SUPERIOR DIREITA\n");
    printf("3. DIAGONAL INFERIOR ESQUERDA\n");
    printf("4. DIAGONAL INFERIOR DIREITA\n\n");
    printf("ESCOLHA UMA DIRECAO: ");
    scanf("%d", &direcao);

    if(direcao < 1 || direcao > 4){
        printf("OPCAO INVALIDA!\n");
        return 0;
    }

    printf("ESCOLHA A QUANTIDADE DE CASAS (1 a 8): ");
    scanf("%d", &casa);

    if(casa < 1 || casa > 8){
        printf("OPCAO INVALIDA!\n");
        return 0;
    }

    printf("\nEFETUANDO MOVIMENTO...\n\n");

    i = 0;
    switch(direcao){
        case 1:
            while(i < casa){
                printf("CIMA + ESQUERDA - Casa %d\n", i + 1);
                i++;
            }
            break;
        case 2:
            while(i < casa){
                printf("CIMA + DIREITA - Casa %d\n", i + 1);
                i++;
            }
            break;
        case 3:
            while(i < casa){
                printf("BAIXO + ESQUERDA - Casa %d\n", i + 1);
                i++;
            }
            break;
        case 4:
            while(i < casa){
                printf("BAIXO + DIREITA - Casa %d\n", i + 1);
                i++;
            }
            break;
        default:
            printf("OPCAO INVALIDA!\n");
            break;
    }

    printf("\nMOVIMENTO EFETUADO!\n");

    // =============================
    //           RAINHA
    // =============================
    printf("\n=============================\n");
    printf("        PECA (RAINHA)        \n");
    printf("=============================\n\n");
    printf("1. ESQUERDA\n");
    printf("2. DIREITA\n");
    printf("3. CIMA\n");
    printf("4. BAIXO\n");
    printf("5. DIAGONAL SUPERIOR ESQUERDA\n");
    printf("6. DIAGONAL SUPERIOR DIREITA\n");
    printf("7. DIAGONAL INFERIOR ESQUERDA\n");
    printf("8. DIAGONAL INFERIOR DIREITA\n\n");
    printf("ESCOLHA UMA DIRECAO: ");
    scanf("%d", &direcao);

    if(direcao < 1 || direcao > 8){
        printf("OPCAO INVALIDA!\n");
        return 0;
    }

    printf("ESCOLHA A QUANTIDADE DE CASAS (1 a 8): ");
    scanf("%d", &casa);

    if(casa < 1 || casa > 8){
        printf("OPCAO INVALIDA!\n");
        return 0;
    }

    printf("\nEFETUANDO MOVIMENTO...\n\n");

    switch(direcao){
        case 1:
            for(int j = 1; j <= casa; j++)
                printf("ESQUERDA - Casa %d\n", j);
            break;
        case 2:
            for(int j = 1; j <= casa; j++)
                printf("DIREITA - Casa %d\n", j);
            break;
        case 3:
            for(int j = 1; j <= casa; j++)
                printf("CIMA - Casa %d\n", j);
            break;
        case 4:
            for(int j = 1; j <= casa; j++)
                printf("BAIXO - Casa %d\n", j);
            break;
        case 5:
            for(int j = 1; j <= casa; j++)
                printf("CIMA + ESQUERDA - Casa %d\n", j);
            break;
        case 6:
            for(int j = 1; j <= casa; j++)
                printf("CIMA + DIREITA - Casa %d\n", j);
            break;
        case 7:
            for(int j = 1; j <= casa; j++)
                printf("BAIXO + ESQUERDA - Casa %d\n", j);
            break;
        case 8:
            for(int j = 1; j <= casa; j++)
                printf("BAIXO + DIREITA - Casa %d\n", j);
            break;
        default:
            printf("OPCAO INVALIDA!\n");
            break;
    }

    printf("\nMOVIMENTO EFETUADO!\n");

    return 0;
}