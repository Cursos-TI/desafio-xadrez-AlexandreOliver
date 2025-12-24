#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


short moverTorre(short qnt_Mov) {
    if (qnt_Mov == 0) {
        return qnt_Mov;
    }

    printf("|  Mov #%hd - Direita                                |\n", qnt_Mov);
    
    moverTorre(qnt_Mov - 1);
}

short moverBispo(short qnt_Mov) {
    if (qnt_Mov == 0) {
        return qnt_Mov;
    }

    printf("|  Mov #%hd - Cima e Direita                         |\n", qnt_Mov);
    
    moverBispo(qnt_Mov - 1);
}

short moverRainha(short qnt_Mov) {
    if (qnt_Mov == 0) {
        return qnt_Mov;
    }

    printf("|  Mov #%hd - Esquerda                               |\n", qnt_Mov);
    
    moverRainha(qnt_Mov - 1);
}

short moverCavalo(short qnt_Mov) {
    if (qnt_Mov > 2) {
        printf("|  Mov #%hd - Baixo                                  |\n", qnt_Mov-1);
    } else if (qnt_Mov == 2) {
        printf("|  Mov #%hd - Esquerda                               |\n", qnt_Mov-1);
    } else {
        return qnt_Mov - 1;
    }

    moverCavalo(qnt_Mov - 1);
}


int main() {

    char opcao;
    const short MOV = 5;

    printf("|=====================> Menu <=====================|\n");
    printf("|---> Escolha uma Peça:                            |\n");
    printf("| (1) - Bispo                                      |\n");
    printf("| (2) - Torre                                      |\n");
    printf("| (3) - Rainha                                     |\n");
    printf("| (4) - Cavalo                                     |\n");
    printf("|---> ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case '1':
            printf("|=================> Movendo Bispo <================|\n");

            moverBispo(MOV);

            break;
        
        case '2':
            printf("|=================> Movendo Torre <================|\n");

            moverTorre(MOV);

            break;

        case '3':
            printf("|================> Movendo Rainha <================|\n");

            moverRainha(MOV);

            break;

        case '4':
            printf("|================> Movendo Cavalo <================|\n");
            
            moverCavalo(4);

            break;
        
        default:
            printf(" Essa opção nao existe.\n");
    }

    printf("|==================================================|\n");


    return 0;
}
