#include <stdio.h>

int main(){

    int i;      //MOVIMENTO TORRE

    printf("\nMovimento da Torre\n");
    for(i = 0; i < 5; i++)
    {
printf("Direita\n");
    }

   //MOVIMENTO BISPO.

    printf("\nMovimento do Bispo\n");
    int bispo = 0;
    while (bispo < 5){
        printf("Para cima e direita\n");
        bispo++;
    }

    //MOVIMENTO RAINHA.

    printf("\nMovimento da Rainha\n");
    int rainha = 0;
    do
    {
printf("Esquerda\n");
rainha++;

} while (rainha < 8);

return 0;

}