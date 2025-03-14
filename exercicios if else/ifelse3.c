#include <stdio.h>

int main() {
    float media;
    int faltas;
    
    // Leitura da média e do número de faltas
    printf("Digite a média do aluno: ");
    scanf("%f", &media);
    
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);
    
    // Verificação das condições de aprovação
    if (faltas >= 5) {
        printf("Reprovado por faltas\n");
    } else if (media < 7.0) {
        printf("Reprovado por média\n");
    } else {
        printf("Parabéns! Você foi aprovado\n");
    }
    
    return 0;
}

