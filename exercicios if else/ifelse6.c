/**********************************************************************************************************
Exercício 6. Faça um programa que leia um nº inteiro e mostre uma mensagem indicando se este número é par
ou ímpar, e se é positivo ou negativo. Ex: 'O número 2 é par e é positivo'.
**********************************************************************************************************/


#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é par", numero);
    } else {
        printf("O número %d é ímpar", numero);
    }
    
    if (numero >= 0) {
        printf(" e é positivo.\n");
    } else {
        printf(" e é negativo.\n");
    }
    
    return 0;
}
