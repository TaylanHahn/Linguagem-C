/**********************************************************************************************************
Exercício 1.  Leia 03 (três) notas de um aluno, calcule sua média. Caso a média seja menor que 7 ele será reprovado.
Apresente a média calculada e a situação (aprovado ou reprovado).
**********************************************************************************************************/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("\nMédia: %.2f", media);
    
    if (media >= 7.0) {
        printf("\nAprovado");
    } else {
        printf("\nReprovado");
    }
    
    return 0;
}
