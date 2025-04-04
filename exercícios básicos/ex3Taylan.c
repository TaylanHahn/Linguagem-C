#include <stdio.h>

int main()
{
    printf("Hello World");

   float nota1, nota2, nota3;
   float resultado;
   
   printf("\nDigite a primeira nota: ");
   scanf("%e", &nota1);
   printf("\nDigite a segunda nota: ");
   scanf("%e", &nota2);
   printf("\nDigite a terceira nota: ");
   scanf("%e", &nota3);
   
   resultado = (nota1 + nota2 + nota3) / 3;
   
   printf("\nA média de suas notas é: %e", resultado);
}