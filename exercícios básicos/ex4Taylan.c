/**********************************************************************************************************
Exercício 4. Escreva um programa que leia 4 notas: a primeira com peso 1, a segunda com peso 2, 
a terceira com peso 3, a quarta com peso 4. Leia as 4 notas e cacule a média e escreva na tela.
Media = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4) 
**********************************************************************************************************/

#include <stdio.h>

int main()
{
   float nota1, nota2, nota3, nota4;
   float media;
   
   printf("\nDigite a primeira nota: ");
   scanf("%f", &nota1);
   printf("\nDigite a segunda nota: ");
   scanf("%f", &nota2);
   printf("\nDigite a terceira nota: ");
   scanf("%f", &nota3);
   printf("\nDigite a quarta nota: ");
   scanf("%f", &nota4);
   
   media = (nota1 * 1 + nota2 * 2 + nota3 * 3 + nota4 * 4) / (1 + 2 + 3 + 4);
   printf("\nA média de suas notas é: %f", media);
}
