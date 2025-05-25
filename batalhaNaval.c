#include <stdio.h>

#define LINHA 10
#define COLUNA 10
int main() {
     // Array de letras para o cabeçalho do tabuleiro
    char LinhaLetras[LINHA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Array de inteiros para o tabuleiro
    int Tabuleiro[LINHA][COLUNA] = {0};
    
    printf("     #### Batalha Naval ####\n\n");
    
    // Cabeçalho de letras do tabuleiro
    printf("   ");  
    for (int i = 0; i < LINHA; i++) { // Loop para cada letra
        printf(" %c ", LinhaLetras[i]); // Imprime cabeçalho de letras
    }
    printf("\n");
    
    // Demarcaçao dos barcos na horizontal e vertical via código
    for (int i = 0; i < 3; i++) { // Loop para cada barco
        Tabuleiro[7][i] = 3;
        Tabuleiro[i+6][8] = 3;
    }

    // Demarcaçao do barco 1 na diagonal via código
    for (int i = 3; i < 6; i++) { // Loop para barco 1 na diagonal
        Tabuleiro[i][i-2] = 3;    
    }

    // Demarcaçao do barco 2 na diagonal via código
    for (int i = 3; i > 0; i--) { // Loop para barco 2 na diagonal
        int j;                    // Enquanto a linha [i] diminui, a coluna [j] aumenta
        j++;
        Tabuleiro[i][j+6] = 3;    
    }
    
    // Inicializaçao do tabuleiro
    for (int i = 0; i < LINHA; i++) { // Loop para cada linha
        printf("%2d ", i + 1);  // imprime numeros na vertical de 1 a 10
        for (int j = 0; j < COLUNA; j++) { // Loop para cada coluna
            printf(" %d ", Tabuleiro[i][j]); // Imprime o valor do tabuleiro alternando a linha e coluna utilizando i e j
        }
        printf("\n");
    }
    
    return 0;
}