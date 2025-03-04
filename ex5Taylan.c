#include <stdio.h>

int main()
{
    float real, cotacaoDolar, conversao;
    
    printf("Câmbio dos Guris");
    printf("\nDigite o valor em real: ");
    scanf("%f", &real);
    printf("\nDigite o valor da cotação atual do dólar: ");
    scanf("%f", &cotacaoDolar);
    
    conversao = real / cotacaoDolar;
    printf("\nO valor R$ %.2f foi convertido para US$ %.2f", real, conversao);
}

// %.2f - para limitar o número de casas decimais
