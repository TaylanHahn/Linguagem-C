
#include <stdio.h>

int main()
{
    char operacao;
    float valor1, valor2, calculo;
    
    printf("--------------------------------------\n");
    printf("Digite + (mais) para somar \nDigite - (hífen) para subtrair \nDigite * (asterisco) para multiplicar \nDigite / (barra) para dividir \n");
    printf("--------------------------------------\n");
    operacao = getchar();
    
    switch(operacao){
        case '+': 
            printf("Digite o primeiro valor: \n");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: \n");
            scanf("%f", &valor2);
            calculo = valor1 + valor2;
            printf("\tO resultado da soma é: %.2f", calculo);
            break;
            
        case '-':
            printf("Digite o primeiro valor: \n");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: \n");
            scanf("%f", &valor2);
            calculo = valor1 - valor2;
            printf("\t\nO resultado da subtração é: %.2f", calculo);
            break;
            
        case '*':
            printf("Digite o primeiro valor: \n");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: \n");
            scanf("%f", &valor2);
            calculo = valor1 * valor2;
            printf("\tO resultado da multiplicação é: %.2f", calculo);
            break;
            
        case '/':
            printf("Digite o primeiro valor: \n");
            scanf("%f", &valor1);
            printf("Digite o segund valor: \n");
            scanf("%f", &valor2);
            calculo = valor1 / valor2;
            printf("\tO resultado da divisão é: %.2f", calculo);
            break;
        
        default:
           printf("Operação inválida.");
    }
}