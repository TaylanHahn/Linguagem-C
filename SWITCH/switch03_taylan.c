/**********************************************************************************************************
O cardápio de uma lancheria é o seguinte:

Código	Especificação	Preço Unitário
100	    Cachorro Quente	   R$10,00
101	     Bauru Simples	   R$13,00
102	     Bauru c/ ovo	   R$16,00
103	       Hambuguer	   R$14,00
104	     Cheeseburguer	   R$16,00
105      Refrigerante	   R$4,00

Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele pedido. 
Considere que a cada execução somente será calculado um item.
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    int cod, qtd;
    float preco, total;
    
    printf("----------------------------------------------\n");
    printf("Código |   Especificação   | Preço Unitário\n");
    printf(" 100   -  Cachorro Quente  - R$10,00\n");
    printf(" 101   -  Bauru Simples    - R$13,00\n");
    printf(" 102   -  Bauru c/ ovo     - R$16,00\n");
    printf(" 103   -  Hambuguer        - R$14,00\n");
    printf(" 104   -  Cheeseburguer    - R$16,00\n");
    printf(" 105   -  Refrigerante     - R$4,00\n");
    printf("----------------------------------------------\n");
    
    printf("Digite o código do seu pedido: ");
    scanf("%d", &cod);
    
    switch(cod){
        case 100: 
            preco = 10.00;
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            total = preco * qtd;
            printf("\nO total a pagar é de R$ %.2f", total);
            break;
            
        case 101:
            preco = 13.00;
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            total = preco * qtd;
            printf("\nO total a pagar é de R$ %.2f", total);
            break;
            
        case 102:
            preco = 16.00;
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            total = preco * qtd;
            printf("\nO total a pagar é de R$ %.2f", total);
            break;
            
        case 103:
            preco = 14.00;
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            total = preco * qtd;
            printf("\nO total a pagar é de R$ %.2f", total);
            break;
        
        case 104:
            preco = 16.00;
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            total = preco * qtd;
            printf("\nO total a pagar é de R$ %.2f", total);
            break;
        
        case 105:
            preco = 4.00;
            printf("Digite a quantidade: ");
            scanf("%d", &qtd);
            total = preco * qtd;
            printf("\nO total a pagar é de R$ %.2f", total);
            break;
            
        default:
           printf("\n\tCódigo inválido.");
    }
}
