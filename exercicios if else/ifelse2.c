/**********************************************************************************************************
Exercício 2.  Leia 04 (quatro) notas de um aluno, a primeira tem peso 1, a segunda peso 2, a terceira peso 3,
a quarta peso 4. Calcule a média e informe se o aluno foi aprovado ou não. Usar 'else'.
Caso a nota seja menor que 7 ele será reprovado.
**********************************************************************************************************/

#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    
    media = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / (1 + 2 + 3 + 4);
    
    printf("\nMédia: %.2f", media);
    
    if (media >= 7.0) {
        printf("\nAprovado");
    } else {
        printf("\nReprovado");
    }
    
    return 0;
}
