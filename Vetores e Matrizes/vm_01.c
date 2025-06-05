/******************************************************************************
1 - Escreva um programa que leia 10 números inteiros. Escrevas os 10 números na ordem em que foram informados e depois os 10 números na ordem inversa (da posição 10 para a primeira). 
*******************************************************************************/

#include <stdio.h>

int main(){
   int i;
   int vetor[10];

   for (i=0; i < 10; i++){
    printf("Informe um nuumero: ");
    scanf("%d", &vetor[i]);
   }

   for (i=0; i < 10; i++){
    printf("%d\n", vetor[i]);
   }

   for (i=10; i > 0; i--){
    printf("%d\n", vetor[10]);
   }
}