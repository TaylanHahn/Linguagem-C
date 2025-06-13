/*

Questão 1(5,0): Desenvolver um programa que cria uma matriz 7 X 7 de INT e
efetuar as seguintes operações:
O programa deve preencher automaticamente a matriz com múltiplos de 7, iniciando
no 7 conforme segue:
Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*7

 7   14  21  28  35  42  49
56   63  70  77  84  91  98
105 112 119 126 133 140 147
154 161 168 175 182 189 196
203 210 217 224 231 238 245
252 259 266 273 280 287 294
301 308 315 322 329 336 343

a) preenchimento correto da matriz e exibir corretamente a matriz (0,5pts). (usar
repetição
b) Apresentar o maior Elemento da matriz (usar repetição). (1pt)
c) Quantidade de elementos pares diagonal principal (usar repetição) (1pt)
d) MÉDIA dos elementos de cada linha (usar repetição), apresentar a MÉDIA de
cada linha (1pt)
e) Definir função que calcula a quantidade números ímpares de uma coluna
(função recebe a matriz como parâmetro e o número da coluna)
f) Usando a função definida no item e, definir função que calcula a
quantidade de números ímpares da matriz (definir função que recebe a
matriz como parâmetro)
g) Apresentar o resultado dos itens b/c/d/e/f

*/

#include <stdio.h>
    
    
    // Função para calcular os impares da coluna
    int calculaImpar_coluna(int matriz[7][7], int j){
        int i, somaImpar=0;
        for(i=0;i<7;i++){
            if(matriz[1][j] % 2 == 1){ 
                somaImpar++;
            }
        } return somaImpar;
    }
    
    // Função para calcular os ímpares da matriz toda
    int calculaImpar(int matriz[7][7]){
        int j, impar=0;
        for(j=0;j<7;j++){
             impar+=calculaImpar_coluna(matriz, j);
        } return impar;
    }

int main()
{
    int matriz[7][7];
    int i, j;
    int maiorElemento=0, paresDiagonal=0, produtoLinha=0, mediaLinha=0, somaLinha=0;
    
    // a) Preenchimento automática do matriz
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            matriz[i][j] = (i*7+j+1)*7;
            printf(" %3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // b) Teste para verificar o maior elemento
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            maiorElemento = matriz[0][0];
            if(maiorElemento < matriz[i][j]){
                maiorElemento = matriz[i][j];
            }
        }
    }
    printf("\nO maior elemento da matriz[7][7] é o %d na linha %d, coluna %d", maiorElemento, i, j);

    // c) Teste para verifica a quantidade de pares na diagonal principal
    for(i=0;i<7;i++){
        if(matriz[i][i] % 2 == 0){
            paresDiagonal++;
        }
    }
    printf("\nA quantidade de elementos pares na diagonal principal é de %d", paresDiagonal);


    // d) Cálculo a média de cada linha
    printf("\n A média de cada linha é de: ");
    
    for(i=0;i<7;i++){
        somaLinha = 0; 
        mediaLinha = 0; // Para calcular a média, é importante zerar a cada loop, já que é para cada linha.
        for(j=0;j<7;j++){
            somaLinha += matriz[i][j];
            mediaLinha = somaLinha / 7;
        }
    printf("\n Linha %d - média de %d", i, mediaLinha);
    }
    
    // e) Definir a função que calcula a qtd de números ímpares em uma coluna
    for(j=0;j<7;j++) printf("Impares da coluna %d: %d\n",j,calculaImpar_coluna(matriz,j));
    
    // f) usar a função do item "e" e exibir a qtd de ímpares na matriz toda
    printf("Total de impares: %d", calculaImpar(matriz));

    
    printf("\n\n\tProgramador: Taylan Hahn Fernandes");
    return 0;
}






