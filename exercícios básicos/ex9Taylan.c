/**********************************************************************************************************
Exercício 9 - Considerando que o aumento dos funcionários é de 75% do INPC e mais um percentual de
produtividade discutido com a empresa. Construir um programa que lê o número do funcionário, seu salário atual,
o valor do INPC e o índice de produtividade e escreve o número do funcionário, seu aumento e o valor de seu novo salário.
Aumento=Salario*0.75*INPC/100  + Salario*IndiceProdutividade/100
Salario Novo = Salario + Aumento  
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    int numeroFuncionario;
    float salarioAtual, salarioNovo, aumento, indiceProd, inpc;
    
    printf("\t### Calcule seu aumento de salário ###");
    printf("\n\t\tInsira o seu número de funcionário: ");
    scanf("%d", &numeroFuncionario);
    printf("\n\t\tInsira seu salário atual: ");
    scanf("%f", &salarioAtual);
    printf("\n\t\tInsira qual foi seu indice de produtividade: ");
    scanf("%f", &indiceProd);
    printf("\n\t\tInsira a porcentagem atual do INPC: ");
    scanf("%f", &inpc);
    
    aumento = salarioAtual * 0.75 * inpc / 100;
    
    salarioNovo = salarioAtual + aumento;
    printf("\n\t\tSeu novo salário será de: R$ %.2f", salarioNovo);
    
}
