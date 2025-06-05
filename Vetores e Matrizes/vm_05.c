/******************************************************************************
5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um vetor. Calcule:
    a - a média da classe
    b - a quantidade de alunos aprovados (média para aprovação:7)
    c - a quantidade de alunos reprovados.
*******************************************************************************/

#include <stdio.h>

int main(){
   int i, contador=0, aprovados=0, reprovados=0, somaNotas=0;
   float notas[10], media=0.0;

   // para colher as 10 notas
   for (i=0; i<10; i++){
    printf("Insira a nota dos alunos: ");
    scanf("%f", &notas[i]);
    contador++;
   }

   // calcular a média dos alunos
   for (i=0; i<10; i++){
    somaNotas += notas[i];
    media = somaNotas / contador;
   }
   printf("\nA media dos alunos foi de %.2f", media);

   // avalia se os alunos foram aprovados ou reprovados
   for (i=0; i<10; i++){
    if (notas[i] >= 7){
        aprovados++;
    } else {
        reprovados++;
    }
   }

   printf("\nA quantidade de alunos aprovados eh de: %d", aprovados);
   printf("\nA quantidade de alunos reprovados eh de: %d", reprovados);

   printf("\n");
   return 0;
}