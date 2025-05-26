#include <stdio.h>

#define LINHA 10
#define COLUNA 10


int main() {

    char LinhaLetras[LINHA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};// Array de letras para o cabeçalho do tabuleiro
    int Tabuleiro[LINHA][COLUNA] = {0}; // Array de inteiros para o tabuleiro
    int piramide = 4; // Determina o ponto de inicio para habilidade piramide
    int cruz = 4; // Determina o ponto de inicio para habilidade cruz
    int octaedro = 7; // Determina o ponto de inicio para a habilidade octaedro
    int n = 0;

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
    for (int i = 0; i < 3; i++) { // Loop para barco 1 na diagonal
        Tabuleiro[i+3][i+1] = 3;  // [i+3] - Descola o inicio do barco para a linha 4
    }                             // [i+1] - Desloca o inicio do barco para a coluna B

    // Demarcaçao do barco 2 na diagonal via código
    for (int i = 3; i > 0; i--) { // Loop para barco 2 na diagonal
                                  // Enquanto a linha [i] diminui, a coluna [n] aumenta
        Tabuleiro[i][n+6] = 3;    // [j+6] - Define o inicio do barco na coluna G
        n++;  
    }

    // Demarcaçao da piramide
    for (int i = 0; i < 3; i++) {        
        Tabuleiro[i][piramide] = 5; // Marca linha no meio da piramide na vertical
        if (i == 1) {
            for (int j = piramide -1; j < piramide + 2; j++) {
                Tabuleiro[i][j] = Tabuleiro[i][j] == 3 ? 1 : 5; 
                // Se em Tabuleiro[i][j] o valor nao for 3, o valor será 1
                // Se em Tabuleiro[i][j] o valor nao for 3, a linha 2 da piramide na horizontal terá valor 5
                } 
            }
        if (i == 2) {
            for (int j = piramide -2; j < piramide + 3; j++) {
                Tabuleiro[i][j] = Tabuleiro[i][j] == 3 ? 1 : 5; 
                // Se em Tabuleiro[i][j] o valor nao for 3, o valor será 1
                // Se em Tabuleiro[i][j] o valor nao for 3, a linha 3 da piramide na horizontal terá valor 5
            }
        }  
    }
    
    // Demarcaçao da cruz
    for (int i = 0; i < 3; i++) {
        // O valor da variavel 'cruz' define o ponto central da habilidade
        Tabuleiro[cruz][cruz - i] = Tabuleiro[cruz][cruz - i] == 3 ? 1 : 5; // Define de forma condicional o lado direito da cruz
        Tabuleiro[cruz][cruz + i] = Tabuleiro[cruz][cruz + i] == 3 ? 1 : 5; // Define de forma condicional o lado esquerdo da cruz
        Tabuleiro[cruz - i][cruz] = Tabuleiro[cruz - i][cruz] == 3 ? 1 : 5; // Define de forma condicional o lado superior da cruz
        Tabuleiro[cruz + i][cruz] = Tabuleiro[cruz + i][cruz] == 3 ? 1 : 5; // Define de forma condicional o lado inferior da cruz
    }

    // Demarcaçao do octaedro  
        // De forma comparativa, quando posiçao for valor 3 ele se tornará valor 1, se nao será valor 5
        Tabuleiro[octaedro + 2][octaedro] = Tabuleiro[octaedro + 2][octaedro] == 3 ? 1 : 5; // Demarca ponta inferior
        Tabuleiro[octaedro - 2][octaedro] = Tabuleiro[octaedro - 2][octaedro] == 3 ? 1 : 5; // Demarca ponta superior
        Tabuleiro[octaedro][octaedro - 2] = Tabuleiro[octaedro][octaedro - 2] == 3 ? 1 : 5; // Demarca ponta lateral esquerda
        Tabuleiro[octaedro][octaedro + 2] = Tabuleiro[octaedro][octaedro + 2] == 3 ? 1 : 5; // Demarca ponta lateral direita
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) { // Demarca quadrado central
                Tabuleiro[octaedro - 1 + j][octaedro - 1 + i] = Tabuleiro[octaedro - 1 + j][octaedro - 1 + i] == 3 ? 1 : 5; 
                } 
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