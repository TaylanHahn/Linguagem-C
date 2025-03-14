#include <stdio.h>

int main() {
    int num1, num2, num3, maior;
    
    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    // Determinação do maior número
    maior = num1;
    
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    
    // Exibição do maior número
    printf("O maior número é: %d\n", maior);
    
    return 0;
}
