#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    char opcao;
    const short MOV = 5;

    printf("|=====================> Menu <=====================|\n");
    printf("|---> Escolha uma Peça:                            |\n");
    printf("| (1) - Bispo                                      |\n");
    printf("| (2) - Torre                                      |\n");
    printf("| (3) - Rainha                                     |\n");
    printf("|---> ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case '1':
            printf("|=================> Movendo Bispo <================|\n");

            for (short i = 0; i < MOV; i++) {
                printf("|  Mov #%hd - Cima e Direita                         |\n", i+1);
            }

            break;
        
        case '2':
            printf("|=================> Movendo Torre <================|\n");

            short i = 0;
            while ( i < MOV ) {
                printf("|  Mov #%hd - Direita                                |\n", i+1);
                i++;
            }

            break;

        case '3':
            printf("|================> Movendo Rainha <================|\n");

            short c = 0;
            do {
                printf("|  Mov #%hd - Esquerda                               |\n", c+1);
                c++;
            } while ( c < MOV+3 );

            break;
        
        default:
            printf(" Essa peça nao esta disponivel.\n");
    }

    printf("|==================================================|\n");


    return 0;
}
