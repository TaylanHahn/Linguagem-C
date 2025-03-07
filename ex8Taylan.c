#include <stdio.h>

int main()
{
    float salario1, salario2, valorConta, somaSalarios, proporcao1, proporcao2, valor1, valor2;
    
    printf("Qual é o valor a ser pago? ");
    scanf("%f", &valorConta);
    
    printf("\nQual é o salário da primeira pessoa? ");
    scanf("%f", &salario1);
    printf("\nQual é o salário da segunda pessoa? ");
    scanf("%f", &salario2);
    
    somaSalarios = salario1 + salario2; // a soma será usada como base da divisão
    
    proporcao1 = salario1 / somaSalarios; 
    printf("\nA proporção do salário da 1º pessoa é: %.2f", proporcao1);
    
    proporcao2 = salario2 / somaSalarios;
    printf("\nA proporção do salário da 2º pessoa é: %.2f", proporcao2);
    
    valor1 = proporcao1 * valorConta;
    printf("\n\n\tO valor a ser pago pela 1ª pessoa é: %.2f", valor1);
    
    valor2 = proporcao2 * valorConta;
    printf("\n\tO valor a ser pago pela 1ª pessoa é: %.2f", valor2);
    
}
