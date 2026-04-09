#include <stdio.h>

// =============================
// FUNÇÃO RECURSIVA - TORRE
// Move em linha reta
// =============================
void moverTorre(int casas, int direcao){
    if(casas == 0) return; // caso-base

    switch(direcao){
        case 1: printf("Esquerda\n"); break;
        case 2: printf("Direita\n");  break;
        case 3: printf("Cima\n");     break;
        case 4: printf("Baixo\n");    break;
    }

    moverTorre(casas - 1, direcao); // chama com 1 casa a menos
}

// =============================
// FUNÇÃO RECURSIVA - BISPO
// Move na diagonal
// Loop externo (vertical) + loop interno (horizontal)
// =============================
void moverBispo(int casas, int direcao){
    if(casas == 0) return; // caso-base

    // loop externo → vertical
    for(int vertical = 1; vertical <= 1; vertical++){
        // loop interno → horizontal
        for(int horizontal = 1; horizontal <= 1; horizontal++){
            switch(direcao){
                case 1:
                    printf("Cima\n");
                    printf("Esquerda\n");
                    break;
                case 2:
                    printf("Cima\n");
                    printf("Direita\n");
                    break;
                case 3:
                    printf("Baixo\n");
                    printf("Esquerda\n");
                    break;
                case 4:
                    printf("Baixo\n");
                    printf("Direita\n");
                    break;
            }
        }
    }

    moverBispo(casas - 1, direcao); // chama com 1 casa a menos
}

// =============================
// FUNÇÃO RECURSIVA - RAINHA
// Move em qualquer direção
// =============================
void moverRainha(int casas, int direcao){
    if(casas == 0) return; // caso-base

    switch(direcao){
        case 1: printf("Esquerda\n");         break;
        case 2: printf("Direita\n");          break;
        case 3: printf("Cima\n");             break;
        case 4: printf("Baixo\n");            break;
        case 5:
            printf("Cima\n");
            printf("Esquerda\n");
            break;
        case 6:
            printf("Cima\n");
            printf("Direita\n");
            break;
        case 7:
            printf("Baixo\n");
            printf("Esquerda\n");
            break;
        case 8:
            printf("Baixo\n");
            printf("Direita\n");
            break;
    }

    moverRainha(casas - 1, direcao); // chama com 1 casa a menos
}

// =============================
//           MAIN
// =============================
int main(){

    int direcao, casa;

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
    moverTorre(casa, direcao);
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
    moverBispo(casa, direcao);
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
    moverRainha(casa, direcao);
    printf("\nMOVIMENTO EFETUADO!\n");

    // =============================
    //           CAVALO
    // 2 casas para cima + 1 para direita
    // LOOPS ANINHADOS COMPLEXOS
    // múltiplas variáveis + break + continue
    // =============================
    printf("\n=============================\n");
    printf("        PECA (CAVALO)        \n");
    printf("=============================\n\n");
    printf("MOVIMENTO: 2 CASAS PARA CIMA + 1 PARA DIREITA\n\n");
    printf("EFETUANDO MOVIMENTO...\n\n");

    int cima    = 2;
    int direita = 1;

    // loop aninhado com múltiplas variáveis
    for(int i = 1, j = 1; i <= cima || j <= direita; i++, j++){

        if(i <= cima){
            printf("Cima\n");
        } else {
            continue; // pula se já completou as casas para cima
        }

        if(i == cima && j <= direita){
            printf("Direita\n");
            break; // para após mover para direita
        }
    }

    printf("\nMOVIMENTO EFETUADO!\n");

    return 0;
}