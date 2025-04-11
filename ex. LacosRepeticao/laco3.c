/**********************************************************************************************************
3) Múltiplos de 3 com WHILE
Escreva um programa que imprima os múltiplos de 3 entre 1 e 20, em ordem crescente, utilizando o laço while.
Dica: o primeiro múltiplo de 3 dentro do intervalo é o número 3.
**********************************************************************************************************/
#include <stdio.h>

int main(){
    int i = 3;
	while(i <= 20) {
		printf("\n%d", i);
		i = i + 3;
	}
}
