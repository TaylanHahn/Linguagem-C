/**********************************************************************************************************
Exercício 1.  Escreva um programa que lê dois numeros e imprima o resultado da soma dos dois numeros.
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    int valor1, valor2, resultado;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    
    resultado = valor1 + valor2;
    
    printf("O resultado da soma é: %d", resultado);
}

