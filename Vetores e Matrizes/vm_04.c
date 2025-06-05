/******************************************************************************
4 - Faça um programa que carregue automaticamente 2 vetores. O primeiro com 10 elementos numéricos e o segundo com 10 caracteres. Imprima o conteúdo destes vetores intercalados. Ex:
1a2b3c4d5e...
Dica: char c[10]; for(i=0;i<10<i++) c[i]=65+i;
*******************************************************************************/

#include <stdio.h>

int main(){
   int i, numeros[10];
   char letras[10];

   for (i=0; i<10; i++){
    numeros[i] = i + 1; // coloca de 1 até 10
   }

   for (i=0; i<10; i++){
    letras[i] = 65 + i; // coloca de A até J 
   }

   for (i=0; i<10; i++){
    printf("%d%c", numeros[i], letras[i]);
   }

   printf("\n");
   return 0;
}