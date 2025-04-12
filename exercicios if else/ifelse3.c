/**********************************************************************************************************
Exercício 3.  Faça um programa que leia a média do aluno e seu numero de faltas. se as faltas forem maior
ou igual a 5, escreva 'reprovado por faltas'. Se a média for menor que 7, foi reprovado por média. Senão,
escreva 'Parabéns! você foi aprovado'.
**********************************************************************************************************/

#include <stdio.h>

int main() {
    float media;
    int faltas;

    printf("Digite sua média: ");
    scanf("%f", &media);
    
    printf("Digite seu número de faltas: ");
    scanf("%d", &faltas);
    
    if (faltas >= 5) {
        printf("\nVocê reprovou por faltas");
    } else if (media < 7) {
        printf("\nVocê reprovou por média");
    } else {
        printf("\nParabéns! Você foi aprovado");
    }
    
    return 0;
}

