/******************************************************************************
2 - Escreva um programa que leia 10 números inteiros. Apresente a soma dos 10 números. 
*******************************************************************************/

#include <stdio.h>

int main(){
   int i, soma=0, vetor[10];

   for (i=0; i<10; i++){
    printf("Informe um nuumero inteiro: ");
    scanf("%d", &vetor[i]);
   }

   for(i=0; i<10; i++){
    soma += vetor[i];
   }

   printf("A soma dos vetores eh de: %d", soma);

   return 0;
}