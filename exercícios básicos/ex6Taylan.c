/**********************************************************************************************************
Exercício 6.  Desenvolva um programa que faça a conversão de um valor lido em dólares para um valor em reias.
O usuário deve informar a quantidade em dólares e a cotação do dólar no dia.
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    float dolar, cotacaoDolar, conversao;
    
    printf("Câmbio dos Guris");
    printf("\nDigite o valor em dólar: ");
    scanf("%f", &dolar);
    printf("\nDigite o valor da cotação atual do dólar: ");
    scanf("%f", &cotacaoDolar);
    
    conversao = dolar * cotacaoDolar;
    printf("\nO valor US$ %.2f foi convertido para R$ %.2f", dolar, conversao);
}

// %.2f - para limitar o número de casas decimais
