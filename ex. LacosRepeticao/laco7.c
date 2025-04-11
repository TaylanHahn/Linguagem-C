/******************************************************************************

7) Sistema de lancheria
Uma lancheria possui o seguinte cardápio:
Código   Produto             Preço
100      Cachorro Quente     11,00
101      Bauru Simples       13,00
102      Bauru com Ovo       15,00
103      Hamburger           11,00
104      Cheeseburger        13,00
105      Refrigerante         3,00
    
Escreva um programa que:
Leia repetidamente o código do item e a quantidade desejada;
Calcule o valor parcial do item e acumule o total a pagar;
Encerre a leitura quando for digitado um código fora do intervalo entre 100 e 105;
Ao final, mostre o valor total do pedido.

*******************************************************************************/

#include <stdio.h>

int main() {
    int codigo, quantidade;
    float total = 0.0;

    printf("Bem-vindo à Lancheria!\n");
    printf("----------------------------------------------\n");
    printf("Código |   Especificação   | Preço Unitário\n");
    printf(" 100   -  Cachorro Quente  - R$11,00\n");
    printf(" 101   -  Bauru Simples    - R$13,00\n");
    printf(" 102   -  Bauru c/ ovo     - R$15,00\n");
    printf(" 103   -  Hambuguer        - R$11,00\n");
    printf(" 104   -  Cheeseburguer    - R$13,00\n");
    printf(" 105   -  Refrigerante     - R$3,00\n");
    printf(" 000 - Para encerrar o pedido \n");
    printf("----------------------------------------------\n");

    while (1) {
        printf("Código do produto: ");
        scanf("%d", &codigo);

        if (codigo < 100 || codigo > 105) {
            break;
        }

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        switch (codigo) {
            case 100:
                total += 11.00 * quantidade;
                break;
            case 101:
                total += 13.00 * quantidade;
                break;
            case 102:
                total += 15.00 * quantidade;
                break;
            case 103:
                total += 11.00 * quantidade;
                break;
            case 104:
                total += 13.00 * quantidade;
                break;
            case 105:
                total += 3.00 * quantidade;
                break;
            default:
                printf("Código inválido!\n");
        }
    }

    printf("--------------------------------------\n");
    printf("O total do pedido é: R$ %.2f\n", total);

    return 0;
}