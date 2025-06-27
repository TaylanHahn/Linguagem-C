/*
Questão 1(5,0): Fazer um programa que cria uma matriz 4 X 4 de INT e efetuar as seguintes
operações:
O programa deve preencher automaticamente a matriz com múltiplos de 4, iniciando no 4 conforme
segue:
Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*4
a) preenchimento correto da matriz/exibir corretamente a matriz
b) Média dos elementos da diagonal secundária (usar repetição).
c) SOMA dos elementos da diagonal principal (usar repetição)
d) Média dos elementos de cada coluna (usar repetição), apresentar a média de cada coluna
e) Encontrar a Média da matriz valor (definir função que recebe a matriz como parâmetro)
f) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 5 valor (definir função que recebe a matriz
como parâmetro)
*/

#include <stdio.h>

float mediaMatriz(int mat[4][4]){
    int linha, coluna;
    float resp=0;
    for(linha=0;linha<4;linha++)
        for(coluna=0;coluna<4;coluna++)
            resp=resp+mat[linha][coluna];
    return resp/16;
}

int somaDiv5(int mat[4][4]){
    int linha, coluna, resp=0;
    for(linha=0;linha<4;linha++)
        for(coluna=0;coluna<4;coluna++)
            if((mat[linha][coluna]%5)==0) 
                resp=resp+mat[linha][coluna];
    return resp;
}


int main(){
    int matriz[4][4];
    int lin, col, somaDiagP=0;
    float mediaDiagS=0,mediaColuna;
    //item a
    for(lin=0; lin<4;lin++){
        for(col=0; col<4; col++){
            matriz[lin][col] = (lin*4+col+1)*4;
            printf("%2d\t",matriz[lin][col]);
        }
        printf("\n");
    }
    //item b
    for(lin=0;lin<4;lin++){
        mediaDiagS = mediaDiagS + matriz[lin][3-lin];
    }
    printf("Media da Diag Sec = %.1f\n",mediaDiagS/4);
    //item c
    for(lin=0;lin<4;lin++){
        somaDiagP = somaDiagP + matriz[lin][lin];
    }
    printf("Soma da Diag Princ = %d\n",somaDiagP);
    
    //item D
    for(col=0; col<4; col++){
        mediaColuna=0;
        for(lin=0; lin<4;lin++){
            mediaColuna = mediaColuna + matriz[lin][col];
        }
        printf("Media da coluna %d: %f\n",col,mediaColuna/4);
    }
    printf("Item E - Media da Matriz: %.1f\n",mediaMatriz(matriz));
    printf("Item F - Soma divisiveis 5: %d",somaDiv5(matriz));
}