/**********************************************************************************************************
2) Ímpares com FOR em ordem decrescente
Escreva um programa que imprima os números ímpares entre 1 e 20, em ordem decrescente, utilizando o comando for.
**********************************************************************************************************/
#include <stdio.h>

int main()
{   
    int i;
    for(i=20; i>0; i--){
        if(i%2==1) printf("%d\n", i);
    }
}
