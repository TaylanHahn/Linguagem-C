/******************************************************************************
7 - Faça um programa que carregue uma matriz 3x3 de números inteiros. Calcule:

a - o maior número
b - o menor número
c - a média dos números
d - a soma da primeira linha
e - o produto (multiplicação) da diagonal principal
*******************************************************************************/

#include <stdio.h> // Inclui funções de entrada e saída

int main() {
    int matriz[3][3], i, j, maior, menor, somaTotal = 0, pLinha = 0, produtoDiagonal = 1;   
    float media;                 

    // Carregar a matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // o maior número
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }

            // o menor número
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }

            // a média dos números
            somaTotal += matriz[i][j];

            // a soma da primeira linha
            if (i == 0) { 
                pLinha += matriz[i][j];
            }

            // o produto da diagonal
            if (i == j) { 
                produtoDiagonal *= matriz[i][j];
            }
        }
    }

    // Calcula a média
    media = (float)somaTotal / 9;

    printf("\n--- Resultados ---\n");
    printf("a - O maior numero: %d\n", maior);
    printf("b - O menor numero: %d\n", menor);
    printf("c - A media dos numeros: %.2f\n", media);
    printf("d - A soma da primeira linha: %d\n", pLinha);
    printf("e - O produto da diagonal principal: %d\n", produtoDiagonal);

    return 0; 
}
