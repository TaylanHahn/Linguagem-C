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
