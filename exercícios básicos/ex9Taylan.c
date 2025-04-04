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