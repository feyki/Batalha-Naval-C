#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define REPRESENTACAO_NAVIO 3

// Função para exibir o tabuleiro
void montagemTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Bem-vindo ao Jogo de Batalha Naval\n");
    printf("----------------------------------\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int h = 0; h < TAMANHO_TABULEIRO; h++) {
            printf("%d ", tabuleiro[i][h]);
        }
        printf("\n");
    }
}

void desenharHabilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int habilidade[5][5], int linha, int coluna, char caracterRepresentante){
    for (int i = 0; i < 5; i++) {        
        for (int h = 0; h < 5; h++) {

            int x = linha + i;
            int y = coluna + h;

            if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO && habilidade[i][h] == 1) {
                tabuleiro[x][y] = caracterRepresentante;
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    //Representação do navio na horizontal
    tabuleiro[4][0] = REPRESENTACAO_NAVIO;
    tabuleiro[4][1] = REPRESENTACAO_NAVIO;
    tabuleiro[4][2] = REPRESENTACAO_NAVIO;

    //Representação do navio na vertical
    tabuleiro[6][2] = REPRESENTACAO_NAVIO;
    tabuleiro[7][2] = REPRESENTACAO_NAVIO;
    tabuleiro[8][2] = REPRESENTACAO_NAVIO;

    //Criação das matrizes que irão representar as habilidades
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},        
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    //Habilidades para serem apresentadas no tabuleiro
    //Os três últimos parâmetros enviados são: Linha, Coluna e o caracter que irá representar no tabuleiro
    desenharHabilidade(tabuleiro, cone, 0, 1, 7);
    desenharHabilidade(tabuleiro, cruz, 3, 4, 1);
    desenharHabilidade(tabuleiro, octaedro, 6, 5, 4);    

    //Montagem do tabuleiro
    montagemTabuleiro(tabuleiro);
    
    return 0;
}
