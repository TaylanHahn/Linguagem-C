/******************************************************************************
5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 11,00
101              | Bauru simples   | 13,00
102              | Bauru c/ovo     | 15,00
103              | Hamburger       | 11,00
104              | Cheeseburger    | 13,00
105              | Refrigerante    | 3,00

O programa deverá apresentar as seguintes opções:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parâmetros o código do item e a quantidade, esta função deverá retornar o valor daquela quantidade de items.

******************************************************************************/

#include <stdio.h>  
#include <ctype.h>  

double totalPedidoAtual = 0.0;
double totalDia = 0.0;

// --- Função para calcular o valor de um item ---

double calcularValorItem(int codigo, int quantidade) {
    double precoUnitario = 0.0;
    double valorItem = 0.0;

    switch (codigo) {
        case 100:
            precoUnitario = 11.00;
            printf("  > Cachorro quente selecionado.\n");
            break;
        case 101:
            precoUnitario = 13.00;
            printf("  > Bauru simples selecionado.\n");
            break;
        case 102:
            precoUnitario = 15.00;
            printf("  > Bauru c/ovo selecionado.\n");
            break;
        case 103:
            precoUnitario = 11.00;
            printf("  > Hamburger selecionado.\n");
            break;
        case 104:
            precoUnitario = 13.00;
            printf("  > Cheeseburger selecionado.\n");
            break;
        case 105:
            precoUnitario = 3.00;
            printf("  > Refrigerante selecionado.\n");
            break;
        default:
            printf("Codigo de lanche invalido. Item nao adicionado ao pedido.\n");
    }

    valorItem = precoUnitario * quantidade;
    printf("  > Quantidade: %d, Valor unitario: %.2lf, Subtotal do item: %.2lf\n", quantidade, precoUnitario, valorItem);
    return valorItem;
}

// --- Função para exibir o menu de opções ---
void exibirMenu() {
    printf("\n--- Cardapio da Lancheria ---\n");
    printf("Codigo |     Produto      | Preco Unitario\n");
    printf("------------------------------------------\n");
    printf("100    | Cachorro quente  | 11,00\n");
    printf("101    | Bauru simples    | 13,00\n");
    printf("102    | Bauru c/ovo      | 15,00\n");
    printf("103    | Hamburger        | 11,00\n");
    printf("104    | Cheeseburger     | 13,00\n");
    printf("105    | Refrigerante     | 3,00\n");
    printf("------------------------------------------\n");
    printf("A - Novo pedido\n");
    printf("B - Adicionar item e quantidade\n");
    printf("C - Fechar pedido e imprimir total\n");
    printf("D - Total do Dia\n");
    printf("E - SAIR do programa\n");
    printf("Escolha uma opcao: ");
}

// --- Função Principal ---
int main() {
    char opcao;
    int codigoItem, quantidadeItem;

    do {
        exibirMenu(); // Mostra o menu
        scanf(" %c", &opcao); 
        opcao = toupper(opcao); // Converte para maiúscula para facilitar

        switch (opcao) {
            case 'A':
                totalPedidoAtual = 0.0;
                printf("\n--- Novo pedido iniciado. Total do pedido atual zerado.---\n");
                break;
            case 'B':
                printf("\n--- Incluir Item ---\n");
                printf("Digite o codigo do lanche: ");
                scanf("%d", &codigoItem);
                printf("Digite a quantidade: ");
                scanf("%d", &quantidadeItem);
                
                if (quantidadeItem <= 0) {
                    printf("Quantidade invalida. Deve ser maior que zero.\n");
                } else {
                    double valorCalculado = calcularValorItem(codigoItem, quantidadeItem);
                    totalPedidoAtual += valorCalculado; // Adiciona ao total do pedido atual
                    printf("  > Valor atual do pedido: %.2lf\n", totalPedidoAtual);
                }
                break;
            case 'C':
                if (totalPedidoAtual > 0) {
                    printf("\n--- Pedido Fechado ---\n");
                    printf("Total deste pedido: %.2lf\n", totalPedidoAtual);
                    totalDia += totalPedidoAtual; // Adiciona ao total do dia
                    totalPedidoAtual = 0.0; // Zera o pedido atual para o proximo
                    printf("\nValor registrado no Total do Dia.\n");
                } else {
                    printf("Nenhum item no pedido atual para fechar.\n");
                }
                break;
            case 'D':
                printf("\n--- Total do Dia ---\n");
                printf("Valor total no dia: %.2lf\n", totalDia);
                break;
            case 'E':
                printf("\nSaindo do programa. Obrigado e volte sempre!\n");
                break;
            default:
                printf("\nOpcao invalida! Por favor, digite uma opcao valida (A, B, C, D ou E).\n");
                break;
        }
    } while (opcao != 'E'); 

    return 0;
}
