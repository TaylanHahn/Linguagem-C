/**********************************************************************************************************
Exercício 4. - Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = 18 anos ou mais
**********************************************************************************************************/

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade >= 5 && idade <= 7) {
        printf("\nCategoria: Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        printf("\nCategoria: Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        printf("\nCategoria: Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        printf("\nCategoria: Juvenil B");
    } else if (idade >= 18) {
        printf("\nCategoria: Adulto");
    } else {
        printf("\nIdade fora de categoria");
    }
    
    return 0;
}
