#include <stdio.h>

void movimentoTorre(int i) {
    if (i >= 5) return;
    printf("Direita\n");
    movimentoTorre(i + 1);
}

void movimentoBispo(int bispo) {
    if (bispo >= 5) return;
    printf("Cima direita\n");
    movimentoBispo(bispo + 1);
}

void movimentoRainha(int rainha) {
    if (rainha >= 8) return;
    printf("Esquerda\n");
    movimentoRainha(rainha + 1);
}

void movimentoCavalo(int movimento, int cavalo) {
    if (movimento == 0) return;

    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    printf("Direita\n");

    movimentoCavalo(movimento - 1, cavalo + 1);
}

int main() {
    printf("\nMovimento da Torre\n");
    movimentoTorre(0);

    printf("\nMovimento do Bispo\n");
    movimentoBispo(0);

    printf("\nMovimento da Rainha\n");
    movimentoRainha(0);

    printf("\nMovimento Cavalo\n");
    movimentoCavalo(1, 0);

    return 0;
}