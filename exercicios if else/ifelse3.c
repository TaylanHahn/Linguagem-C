#include <stdio.h>

int main() {
    float media;
    int faltas;

    printf("Digite a média do aluno: ");
    scanf("%f", &media);
    
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);
    
    if (faltas >= 5) {
        printf("\nVocê reprovou por faltas");
    } else if (media < 7.0) {
        printf("\nVocê reprovou por média");
    } else {
        printf("\nParabéns! Você foi aprovado");
    }
    
    return 0;
}

