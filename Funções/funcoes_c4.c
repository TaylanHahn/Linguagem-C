/**************************************
 * 4 - Calculadora2: Escreva um programa onde o usuário poderá escolher uma das opções:
a - Soma (ler operador 1 e operador 2)
b - Subtração (ler operador 1 e operador 2)
c - Divisão (ler base e divisor)
d - Multiplicação (ler base e multiplicador)
e - Fatorial
f - Potencia (ler base e potencia)
g - SAIR
 * ****************************************/

#include <stdio.h> 
#include <ctype.h> 

// Função para Soma
double soma(double num1, double num2) {
    return num1 + num2;
}

// Função para Subtração
double sub(double num1, double num2) {
    return num1 - num2;
}

// Função para Divisão
double divd(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisao por zero! Nao e possivel calcular.\n");
        return 0.0; // Retorna 0.0 para indicar erro
    }
}

// Função para Multiplicação
double mult(double num1, double num2) {
    return num1 * num2;
}

// Função para Fatorial (usando double para o resultado)
double fatorial(int n) {
    if (n < 0) {
        printf("Erro: Nao e possivel calcular o fatorial de um numero negativo.\n");
        return -1.0;
    }
    if (n == 0 || n == 1) {
        return 1.0;
    }
    double resultado_fatorial = 1.0;
    for (int i = 2; i <= n; i++) {
        resultado_fatorial *= i;
    }
    return resultado_fatorial;
}

// Função para Potência (implementação manual sem math.h)
double potencia(double base, int exp) { // Expoente como int para simplificar
    double resultado = 1.0;
    if (exp == 0) {
        return 1.0;
    }
    if (exp < 0) {
        base = 1.0 / base;
        exp = -exp;
    }
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }
    return resultado;
}

// --- Função Principal ---
int main() {
    double num1, num2; 
    int num_fatorial; 
    int num_potencia; 
    char opcao;
    double resultado; 
    do {
        // Apresenta o menu de opções ao usuário
        printf("\n--- Calculadora2 ---\n");
        printf("a - Soma (ler operador 1 e operador 2)\n");
        printf("b - Subtracao (ler operador 1 e operador 2)\n");
        printf("c - Divisao (ler base e divisor)\n");
        printf("d - Multiplicacao (ler base e multiplicador)\n");
        printf("e - Fatorial (ler numero)\n");
        printf("f - Potencia (ler base e potencia)\n");
        printf("g - SAIR\n");
        printf("Escolha uma opcao: ");

        // Lê a opção do usuário
        scanf(" %c", &opcao); // O espaço antes de %c é importante

        // Converte a opção para maiúscula
        opcao = toupper(opcao);

        switch (opcao) {
            case 'A':
                printf("Digite o operador 1: ");
                scanf("%lf", &num1);
                printf("Digite o operador 2: ");
                scanf("%lf", &num2);
                resultado = soma(num1, num2);
                printf("Resultado da Soma: %.2lf\n", resultado);
                break;
            case 'B':
                printf("Digite o operador 1: ");
                scanf("%lf", &num1);
                printf("Digite o operador 2: ");
                scanf("%lf", &num2);
                resultado = sub(num1, num2);
                printf("Resultado da Subtracao: %.2lf\n", resultado);
                break;
            case 'C':
                printf("Digite a base: ");
                scanf("%lf", &num1);
                printf("Digite o divisor: ");
                scanf("%lf", &num2);
                resultado = divd(num1, num2);
                // A funcao divd ja imprime o erro; nao precisamos de isnan aqui
                if (num2 != 0) { // So imprime o resultado se nao houve divisao por zero
                    printf("Resultado da Divisao: %.2lf\n", resultado);
                }
                break;
            case 'D':
                printf("Digite a base: ");
                scanf("%lf", &num1);
                printf("Digite o multiplicador: ");
                scanf("%lf", &num2);
                resultado = mult(num1, num2);
                printf("Resultado da Multiplicacao: %.2lf\n", resultado);
                break;
            case 'E':
                printf("Digite um numero inteiro nao negativo para calcular o fatorial: ");
                scanf("%d", &num_fatorial);
                resultado = fatorial(num_fatorial);
                if (resultado == -1.0) {
                    // Mensagem de erro ja foi impressa na funcao fatorial
                } else {
                    printf("Fatorial de %d: %.0lf\n", num_fatorial, resultado); // Imprime como inteiro
                }
                break;
            case 'F':
                printf("Digite a base: ");
                scanf("%lf", &num1);
                printf("Digite a potencia (expoente inteiro): "); // Expoente como int para simplificar
                scanf("%d", &num_potencia);
                resultado = potencia(num1, num_potencia);
                printf("Resultado da Potencia: %.2lf\n", resultado);
                break;
            case 'G':
                printf("Saindo da calculadora.\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 'G'); 

    return 0; 
}