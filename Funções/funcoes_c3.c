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

// Declaração das funções
int soma(int num1, int num2);
int mult(int num1, int num2);
int divd(int num1, int num2);
int sub(int num1, int num2);

int main() 
{
    int num1, num2;
    char opcao;

    printf("Insira um número: ");
    scanf("%d", &num1);
    printf("Insira outro número: ");
    scanf("%d", &num2);

    printf("\nEscolha uma opção de operação:\nA - Somar\nB - Multiplicar\nC - Dividir\nD - Subtrair\n");
    scanf(" %c", &opcao); // Espaço antes de %c para evitar problemas com buffer

    opcao = toupper(opcao); // Convertendo para maiúscula

    switch (opcao) {
        case 'A': 
            printf("Somando fica %d\n", soma(num1, num2));
            break;
        case 'B': 
            printf("Multiplicando fica %d\n", mult(num1, num2));
            break;
        case 'C': 
            if (num2 != 0) {
                printf("Dividindo fica %d\n", divd(num1, num2));
            } else {
                printf("Erro: Divisão por zero não permitida.\n");
            }
            break;
        case 'D': 
            printf("Subtraindo fica %d\n", sub(num1, num2));
            break;
        default: 
            printf("Opção inválida!\n");
            break;
    }

    printf("\n-------------------------------------\n");

    return 0;
}

// Funções matemáticas
int soma(int num1, int num2) {
    return num1 + num2;
}

int mult(int num1, int num2) {
    return num1 * num2;
}

int divd(int num1, int num2) {
    return num1 / num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}






