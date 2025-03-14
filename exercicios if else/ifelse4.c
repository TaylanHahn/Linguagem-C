#include <stdio.h>

int main() {
    int idade;
    
    // Leitura da idade do nadador
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    // Classificação por categoria
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Idade fora das categorias classificadas\n");
    }
    
    return 0;
}
