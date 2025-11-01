#include <stdio.h>

void movimentacao_torre(int casas) {
    if (casas > 0) {
        printf("Direita.\n");
        movimentacao_torre(casas - 1);
    }
}

void movimentacao_bispo(int casas) {
    // Loop externo: movimentação vertical
    for (int i = 0; i < casas; i++) {
        // Loop interno: movimentação horizontal (1 passo por iteração vertical)
        for (int j = 0; j < 1; j++) {
            printf("Cima, direita.\n");
        }
    }
}

void movimentacao_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda.\n");
        movimentacao_rainha(casas - 1);
    }
}


int main(){

   int movimentocompleto = 1;

    // Lógica do movimento da torre
    printf("Movendo a torre:\n");
    movimentacao_torre(5);

    // Lógica do movimento do bispo
    printf("Movendo o bispo:\n");
    movimentacao_bispo(5);

    // Lógica do movimento da rainha
    printf("Movendo a rainha:\n");
    movimentacao_rainha(8);

    //Lógica do movimento do cavalo
    printf("Movendo o cavalo:\n");

    while(movimentocompleto--){

        for (int i=0; i < 2; i++)
        {
            printf("Cima.\n");
        }
        printf("Direita.\n");

    }
    return 0;
}