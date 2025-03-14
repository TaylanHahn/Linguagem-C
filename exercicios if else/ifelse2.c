#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    
    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    
    // Cálculo da média ponderada
    media = (nota1 * 1 + nota2 * 2 + nota3 * 3 + nota4 * 4) / (1 + 2 + 3 + 4);
    
    // Exibição do resultado
    printf("\nMédia: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
}
