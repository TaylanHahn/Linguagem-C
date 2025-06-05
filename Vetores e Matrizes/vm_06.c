/******************************************************************************
6- CAIXA ELETRÔNICO. Escrever um programa que lê um valor inteiro em reais e calcula qual o menor número possível de notas de 100, 50, 20, 10, 5, 2 e 1 em que o valor lido pode ser entregue ao cliente. Escrever a relação de notas necessárias. Utilize um vetor para armazenar o valor de cada tipo de nota. Notas = {100, 50, 20, 10, 5, 2, 1}
*******************************************************************************/

#include <stdio.h>

int main() {
    int valor, i;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade_notas[7]; // armazena a qtd de cada tipo de nota

    printf("-----------------------------------------\n");
    printf("             CAIXA ELETRONICO            \n");
    printf("-----------------------------------------\n");
    printf("Digite o valor em reais que deseja sacar: ");
    scanf("%d", &valor);

    // inicializa a quantidade de notas de cada tipo como zero
    for (i = 0; i < 7; i++) {
        quantidade_notas[i] = 0;
    }

    printf("\nNotas necessarias:\n");

    // calcula a qtd de cada tipo de nota
    for (i = 0; i < 7; i++) {
        while (valor >= notas[i]) {
            valor -= notas[i]; // subtrai o valor da nota do total
            quantidade_notas[i]++; // incrementa a quantidade dessa nota
        }
    }

    // Loop para imprimir a relação de notas necessárias
    for (i = 0; i < 7; i++) {
        if (quantidade_notas[i] > 0) { 
            printf("%d nota(s) de R$ %d\n", quantidade_notas[i], notas[i]);
        }
    }
    return 0;
}