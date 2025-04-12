/**********************************************************************************************************
Exercício 7.  A Joalheria Silva está fazendo aniversário e resolveu premiar o primeiro cliente do dia
devolvendo a ele o valor da compra em dobro. Faça um programa que leia o preço unitário do produto adquirido
pelo cliente, a quantidade e calcule o total gasto pelo cliente. Mostre o total e calcule o prêmio. Mostre o
valor do prêmio (total da compra multiplicado por 2)
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    float precoProduto, total, premio;
    int quantidade;
    
    printf("\nDigite o valor do produto: ");
    scanf("%f", &precoProduto);
    printf("\nDigite a quantidade desse produto: ");
    scanf("%d", &quantidade);
    
    total = precoProduto * quantidade;
    printf("\nTotal da compra: R$ %.2f", total);
    
    premio = total * 2;
    printf("\n\tPARABÉNS, você foi contemplado com um prêmio em \n\tcomemoração ao aniversário da Joalheiria Silva!\n\tO valor do prêmio é de R$ %.2f", premio);

}



