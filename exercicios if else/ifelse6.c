#include <stdio.h>

int main() {
    int numero;
    
    // Leitura do número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Verificação se é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par", numero);
    } else {
        printf("O número %d é ímpar", numero);
    }
    
    // Verificação se é positivo ou negativo
    if (numero >= 0) {
        printf(" e é positivo.\n");
    } else {
        printf(" e é negativo.\n");
    }
    
    return 0;
}
