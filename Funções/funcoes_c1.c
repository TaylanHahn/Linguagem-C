/******************************************************************************
1 - Escreva um programa que leia um número e escreva este número elevado ao quadrado.
O programa deve ter uma função que recebe um número como parâmetro e retorne este número elevado ao quadrado
*******************************************************************************/

#include <stdio.h>

int quadrado();

int main()
{
    int num=0;
    
    printf("Insira um número para elevá-lo ao quadrado: ");
    scanf("%d", &num);
    
    printf("Esse número elevado ao quadrado é %d", quadrado(num));

    return 0;
}

int quadrado(int num){
    return num * num;
}