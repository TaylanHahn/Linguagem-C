/**********************************************************************************************************
Exercício 2. Escreva um programa que lê três numeros e imprima o resultado da multiplicação.
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, resultado;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
     printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);
    
    resultado = (valor1 * valor2) * valor3;
    
    printf("O resultado da soma é: %d", resultado);
}

