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
