// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios

#include <stdio.h>

int main() {
     // Array de letras para o cabeçalho do tabuleiro
    char LinhaLetras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Array de inteiros para o tabuleiro
    int Tabuleiro[10][10] = {0};
    
    printf("     #### Batalha Naval ####\n\n");
    
    // Cabeçalho de letras do tabuleiro
    printf("   ");  
    for (int i = 0; i < 10; i++) { // Loop para cada letra
        printf(" %c ", LinhaLetras[i]);
    }
    printf("\n");
    
    // Demarcaçao dos barcos via código
    for (int i = 0; i < 3; i++) { // Loop para cada barco
        Tabuleiro[2][i] = 3;
        Tabuleiro[i+6][8] = 3;
    }

    // Inicializaçao do tabuleiro
    for (int i = 0; i < 10; i++) { // Loop para cada linha
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) { // Loop para cada coluna
            printf(" %d ", Tabuleiro[i][j]); // Imprime o valor do tabuleiro alternando a linha e coluna utilizando i e j
        }
        printf("\n");
    }
    
    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
