/**********************************************************************************************************
4) Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas.
Calcule a média aritmética. E indique o conceito: 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".
**********************************************************************************************************/

#include <stdio.h>

int main()
{
    int faltas;
    float nota1, nota2, trabalho, media;
    
    printf("Insira a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Insira a nota do trabalho: \n");
    scanf("%f", &trabalho);
    printf("Número de faltas: \n");
    scanf("%d", &faltas);
    
    media = (nota1 + nota2 + trabalho) / 3;
    printf("Sua média é de:%.2f\n", media);
    printf("-----------------------------");
    
    
    if(faltas >= 5){
        printf("\nReprovado por faltas");
    } else if(media >= 8){
        printf("\nAvaliação A");
    } else if(media >= 7 && media <= 7.9){
        printf("\nAvaliação B");
    } else if (media >= 6 && media <= 6.9){
        printf("\nAvaliação C");
    } else if (media >= 0 && media <= 5.9){
        printf("\nAvaliação D");
    } 
    
}
