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
