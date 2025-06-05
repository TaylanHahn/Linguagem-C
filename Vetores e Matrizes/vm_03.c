/******************************************************************************
3 - Escreva um programa que leia 10 números reais. Apresente o resultado da  multiplicação destes.  
*******************************************************************************/

#include <stdio.h>

int main(){
   int i, vetor[10];
   float mult=1;

   for (i=0; i<10; i++){
    printf("Informe um nuumero inteiro: ");
    scanf("%d", &vetor[i]);
   }

   for(i=0; i<10; i++){
    mult *= vetor[i];
   }

   printf("\nO produto dos vetores eh de: %.2f", mult);
   return 0;
}