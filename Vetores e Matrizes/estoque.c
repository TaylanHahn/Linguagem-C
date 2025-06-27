/*
Crie um programa que leia o estoque atual de 4 produtos (colunas) que estão
armazenados em 4 armazéns (linhas) e coloque estes dados em uma matriz 5x4.
Sendo que a última linha contem o custo de cada unidade do produto. Calcule e imprima:

- A quantidade de itens armazenados em cada armazém (soma da linha)
- Qual armazém possui maior estoque do produto 2
- Qual armazém possui menor estoque do produto 4
- Qual o custo total de cada produto (somando todos os armazéns vezes o preço)
- Qual o custo total de cada armazém (soma dos valores armazenados)

Exemplo:

10 20 30 40 10 //estoque do armazém 1

30 10 20 50 20 //estoque do armazém 2

40 10 20 20 10 //estoque do armazém 3

50 10 20 20 20 //estoque do armazém 4

15 25 30 20 50 //preço dos produtos.
*/

#include <stdio.h>

int main() {
    int estoque[5][4]; // Matriz 5x4 para estoque e custos
    int i, j;

    // Leitura dos dados do estoque e custos
    printf("Digite o estoque atual de 4 produtos em 4 armazéns e o custo por unidade:\n");
    for (i = 0; i < 5; i++) {
        printf("Linha %d (Armazém %d ou Custo): ", i + 1, (i < 4) ? i + 1 : 0);
        for (j = 0; j < 4; j++) {
            scanf("%d", &estoque[i][j]);
        }
    }

    printf("\n--- Resultados ---\n");

    // 1. Quantidade de itens armazenados em cada armazém
    printf("\nQuantidade de itens em cada armazém:\n");
    for (i = 0; i < 4; i++) {
        int totalArmazem = 0;
        for (j = 0; j < 4; j++) {
            totalArmazem += estoque[i][j];
        }
        printf("Armazém %d: %d itens\n", i + 1, totalArmazem);
    }

    // 2. Qual armazém possui maior estoque do produto 2 (índice 1)
    int maiorEstoqueProduto2 = -1; // Inicializa com um valor que certamente será menor que qualquer estoque real (que não deve ser negativo)
    int armazemMaiorEstoqueProduto2 = -1;

    // Garante que haja pelo menos um armazém para comparar
    if (4 > 0) { // Se houver pelo menos 1 armazém
        maiorEstoqueProduto2 = estoque[0][1]; // Inicializa com o estoque do produto 2 no primeiro armazém
        armazemMaiorEstoqueProduto2 = 1;

        for (i = 1; i < 4; i++) { // Começa do segundo armazém
            if (estoque[i][1] > maiorEstoqueProduto2) {
                maiorEstoqueProduto2 = estoque[i][1];
                armazemMaiorEstoqueProduto2 = i + 1;
            }
        }
    }
    printf("\nArmazém com maior estoque do Produto 2: Armazém %d (%d unidades)\n", armazemMaiorEstoqueProduto2, maiorEstoqueProduto2);

    // 3. Qual armazém possui menor estoque do produto 4 (índice 3)
    int menorEstoqueProduto4 = -1; // Inicializa com um valor para ser atualizado pelo primeiro elemento
    int armazemMenorEstoqueProduto4 = -1;

    // Garante que haja pelo menos um armazém para comparar
    if (4 > 0) { // Se houver pelo menos 1 armazém
        menorEstoqueProduto4 = estoque[0][3]; // Inicializa com o estoque do produto 4 no primeiro armazém
        armazemMenorEstoqueProduto4 = 1;

        for (i = 1; i < 4; i++) { // Começa do segundo armazém
            if (estoque[i][3] < menorEstoqueProduto4) {
                menorEstoqueProduto4 = estoque[i][3];
                armazemMenorEstoqueProduto4 = i + 1;
            }
        }
    }
    printf("Armazém com menor estoque do Produto 4: Armazém %d (%d unidades)\n", armazemMenorEstoqueProduto4, menorEstoqueProduto4);

    // 4. Custo total de cada produto (somando todos os armazéns vezes o preço)
    printf("\nCusto total de cada produto:\n");
    for (j = 0; j < 4; j++) {
        int custoTotalProduto = 0;
        for (i = 0; i < 4; i++) {
            custoTotalProduto += estoque[i][j] * estoque[4][j];
        }
        printf("Produto %d: R$ %d\n", j + 1, custoTotalProduto);
    }

    // 5. Custo total de cada armazém (soma dos valores armazenados)
    printf("\nCusto total de cada armazém:\n");
    for (i = 0; i < 4; i++) {
        int custoTotalArmazem = 0;
        for (j = 0; j < 4; j++) {
            custoTotalArmazem += estoque[i][j] * estoque[4][j];
        }
        printf("Armazém %d: R$ %d\n", i + 1, custoTotalArmazem);
    }

    return 0;
}