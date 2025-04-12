/**********************************************************************************************************
Exercício 8. Equidade: Léia e Luke são irmãos e dividem um apartamento alugado. 
O salário de Luke é R$2.000,00 o salário de Léia é de R$4.000,00. 
O valor do aluguel é de R$1.000,00. 
Para que a divisão do valor tenha equidade, Luke deve pagar 1/3 e Léia deve pagar 2/3. 
Para calcular essa proporção, basta dividir o salário de cada um pela soma dos salários.

Proporção Luke será de 2000/6000 = 1/3
Proporção Léia será de 4000/6000 = 2/3

Valor a pagar no aluguel: Luke R$333,33 Léia=R$666,67

Escreva um programa que, leia o salário de 2 pessoas e o valor da conta a ser dividida.
Apresente quanto cada um deve pagar em uma divisão com equidade.

Após calcular a proporção da pessoa, basta multiplicar pelo valor da conta, que resultará no valor a ser pago pela pessoa.
**********************************************************************************************************/

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
