/******************************************************************************
3 - Escreva um programa que apresente leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D - Subtrair 2 Números

Cada um dos items deve ser uma função 
*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// declaração das funções
int soma(int num1, int num2);
int mult(int num1, int num2);
int divd(int num1, int num2);
int sub(int num1, int num2);

int main()
{
    int num1=0, num2=0;
    char opcao;
    
    printf("Insira um número: ");
    scanf("%d", &num1);
    printf("Insira outro número: ");
    scanf("%d", &num2);
    
    printf("\nEscolha uma opção de operação:\nA - Somar\nB - Multiplicar\nC - Dividir\nD - Subtrair\n");
    scanf("%c", &opcao);
    
    switch (toupper(opcao)){
        case 'A': int soma(); printf("Somando fica %d", soma(num1, num2)); break;
        case 'B': int mult(); printf("Multiplicando fica %d", mult(num1, num2)); break;
        case 'C': int divd(); printf("Dividindo fica %d", divd(num1, num2)); break;
        case 'D': int sub(); printf("Subtraindo fica %d", soma(num1, num2)); break;
        default: break;
    }
    
    printf("\n-------------------------------------\n");
    
}

int soma(int num1, int num2){
    return num1 + num2;
}

int mult(int num1, int num2){
    return num1 * num2;
}

int divd(int num1, int num2){
    return num1 / num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}






