#include <stdio.h>
int main(){

    // Declarando as variáveis
    int movtorre =5, movbispo = 5, movrainha = 8;
    int moviementocompleto = 1;

    // Lógica do movimento da torre
    printf("Movendo a torre:\n");
    while (movtorre >0){
        printf("Direita.\n");
        movtorre--;
    }

    // Lógica do movimento do bispo
    printf("Movendo o bispo:\n");
    do {
        printf("Cima, direita.\n");
        movbispo--;
    } while (movbispo >0);

    // Lógica do movimento da rainha
    printf("Movendo a rainha:\n");
    for (int i = 0; i < movrainha; i++) {
        printf("Esquerda.\n");
    }

    //Lógica do movimento do cavalo
    printf("Movendo o cavalo:\n");

    while(moviementocompleto--){

        for (int i=0; i < 2; i++)
        {
            printf("Cima.\n");
        }
        printf("Direita.\n");

    }
    return 0;
}
