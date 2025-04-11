/**********************************************************************************************************
5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    int code, qtd;
    float preco, total;
    
    printf("Insira o código do produto: \n");
    scanf("%d", &code);
    printf("Digite a quantidade: \n");
    scanf("%d", &qtd);
    
    if(code == 100){
        printf("Você pediu %d - Cachorro quente\n", qtd);
        preco = 5.00;
    }
    
    if(code == 101){
        printf("Você pediu %d - Bauru simples\n", qtd);
        preco = 6.00;
    }
    
    if(code == 102){
        printf("Você pediu %d - Bauru c/ovo\n", qtd);
        preco = 8.00;
    }
    
    if(code == 103){
        printf("Você pediu %d - Hambúrger\n", qtd);
        preco = 5.00;
    }
    
    if(code == 104){
        printf("Você pediu %d - Cheeseburger\n", qtd);
        preco = 7.50;
    }
    
    if(code == 105){
        printf("Você pediu %d - Refrigerante\n", qtd);
        preco = 2.00;
    }
    
    total = preco * qtd;
    printf("O valor total é de R$%.2f", total);
}
