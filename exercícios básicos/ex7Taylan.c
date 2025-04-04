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



