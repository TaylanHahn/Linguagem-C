
#include <stdio.h>

int main()
{
    char cod;
    float salario, novoSalario, aumento;
    
    printf("----------------------------\n");
    printf("Código |    Cargo  \n");
    printf("   1   -  Escrituário\n");
    printf("   2   -  Secretário\n");
    printf("   3   -  Caixa \n");
    printf("   4   -  Gerente\n");
    printf("   5   -  Diretor\n");
    printf("----------------------------\n");
    
    printf("Digite o código do seu cargo: ");
    cod = getchar();
    
    switch(cod){
        case '1': 
            printf("Digite seu salário atual: ");
            scanf("%f", &salario);
            aumento = 0.3;
            novoSalario = (salario * aumento) + salario;
            printf("\nO seu novo salário é de R$ %.2f", novoSalario);
            break;
            
        case '2':
            printf("Digite seu salário atual: ");
            scanf("%f", &salario);
            aumento = 0.25;
            novoSalario = (salario * aumento) + salario;
            printf("\nO seu novo salário é de R$ %.2f", novoSalario);
            break;
            
        case '3':
            printf("Digite seu salário atual: ");
            scanf("%f", &salario);
            aumento = 0.2;
            novoSalario = (salario * aumento) + salario;
            printf("\nO seu novo salário é de R$ %.2f", novoSalario);
            break;
            
        case '4':
            printf("Digite seu salário atual: ");
            scanf("%f", &salario);
            aumento = 0.1;
            novoSalario = (salario * aumento) + salario;
            printf("\nO seu novo salário é de R$ %.2f", novoSalario);
            break;
        
        case '5':
            printf("Digite seu salário atual: ");
            scanf("%f", &salario);
            printf("\nSeu salário permance sendo R$ %.2f", salario);
            break;
            
        default:
           printf("\n\tCódigo inválido.");
    }
}