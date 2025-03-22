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
