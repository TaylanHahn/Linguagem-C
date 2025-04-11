/**********************************************************************************************************
4)Múltiplos de 3 com DO WHILE decrescente
Escreva um programa que imprima os múltiplos de 3 entre 1 e 20, em ordem decrescente, utilizando o laço do while.
Dica: comece de 18 e vá até 3.
**********************************************************************************************************/

#include <stdio.h>

int main(){
    int i = 18;
	while(i > 0) {
		printf("\n%d", i);
		i = i - 3;
	}
}
