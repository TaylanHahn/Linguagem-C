/******************************************************************************
Questão 1(5,0): Fazer um programa que cria uma matriz 10 X 10 de INT e efetuar
as seguintes operações: O programa deve preencher automaticamente a matriz com
múltiplos de 4, iniciando no 4 conforme segue:
*******************************************************************************/

#include <stdio.h>

// Declaração das funções
int qtdPrimos();
int primosToda();
int somaSete();


int main()
{
    int matriz[10][10];
    int i, j;
    int somaDiag=0, mediaDP=0;
    
    // a) Preenchimento automática do matriz
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                matriz[i][j] = (i*10+j+1)*4;
                printf(" %3d ", matriz[i][j]);
            }
            printf("\n");
        }
    
    // b) Média dos elementos da diagonal principal
        for(i=0;i<10;i++){
            somaDiag += matriz[i][i];
            mediaDP = somaDiag / 10;
        }
        printf("\n A media da diagonal principal eh de: %d", mediaDP);
        
    // c) Função que calcula quantidade de primos em cada linha
        int qtdPrimos(int matriz[10][10], int i){
            int qtdPrimosLinha =0;
                for(i=0;i<10;i++){
                    if(matriz[i][i]%4==0){
                            qtdPrimosLinha++;
                    }
                }
                return qtdPrimosLinha;
            }
            
        // Apresentando a quantidade de primos em cada linha
        printf("\n");
        for(i=0;i<10;i++){
            printf("\n Linha %d - Qtd primos %d", i, qtdPrimos(matriz, i));
        }
        
    // d) Função para calcular a quantidade de primos em toda matriz
        int primosToda(int matriz[10][10], int j){
            int qtdPrimosTotal=0;
            for(j=0;j<10;j++){
                 qtdPrimosTotal+=qtdPrimos(matriz, i);
            }
            return qtdPrimosTotal;
        }
        printf("\n\nA quantidade de primos na matriz toda eh de: %d", primosToda(matriz, j));
        
    // e) Encontra a SOMA DOS NÚMEROS DIVISÍVEIS POR 7
    
        int somaSete(int matriz[i][j]){
            int i, j, acumulador=0, somaTotal=0;
            for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    if(matriz[i][j]%7==0){
                        acumulador = matriz[i][j];
                        somaTotal+=acumulador;
                    }
                }
            }
            return somaTotal;
        }
        printf("\n\nA soma dos numeros divisiveis por 7 eh de: %d", somaSete(matriz));
        
        printf("\n\n\tAluno e programador: Taylan Hahn Fernandes");
}






