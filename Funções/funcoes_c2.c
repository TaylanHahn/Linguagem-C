/******************************************************************************
2 - Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e retorna a soma,
e outra função que recebe os três números e retorna o produto.
*******************************************************************************/

#include <stdio.h>

// declaração das funções
int soma();
int mult();

int main()
{
    int num1=0, num2=0, num3=0;
    
    printf("Insira um número: ");
    scanf("%d", &num1);
    printf("Insira outro número: ");
    scanf("%d", &num2);
    printf("Insira mais um número: ");
    scanf("%d", &num3);
    
    printf("-------------------------------------\n");
    
    printf("A soma desses números é de %d", soma(num1, num2, num3));
    printf("\nO produto desses números é de %d", mult(num1, num2, num3));


    return 0;
}

int soma(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int mult(int num1, int num2, int num3){
    return num1 * num2 * num3;
}






