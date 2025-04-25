/******************************************************************************
Questão 1: Faça um programa em linguagem C que execute as seguintes tarefas:

a) Peça ao usuário números inteiros positivos, deve parar de pedir números
quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
uma estrutura de repetição (for, while ou do.. while);

b) Para cada número inteiro
positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores
ímpares e a tabuada dos valores pares;

c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
e o Maior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
todos os itens.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int nDigitado=-1, nMaior, i, tabuada, sImpar=0, iImpar=0;
    float mediaImpar=0.0;
    nMaior = nDigitado;
    
    while (nDigitado != 0){
        printf("Digite um número inteiro positivos: ");
        scanf("%d", &nDigitado);
        
        // Se for ZERO, encerra o loop
        if(nDigitado == 0){
            break;
        }
        
        // Testa se é par
        if(nDigitado % 2 == 0){
            printf("Tabuada do nº %d\n", nDigitado);
            for(i=0;i<=10;i++){
                tabuada = nDigitado * i;
                printf("%d x %d = %d\n", nDigitado, i, tabuada);
            }
        } 
        
        // Testa se é ímpar
        if(nDigitado % 2 != 0){
            printf("Os divisores ímpares de %d são: ", nDigitado);
            sImpar += nDigitado;
            iImpar++;
            mediaImpar = sImpar/iImpar; // Calcula a média dos ímpares
            for(i=1;i<=nDigitado;i++){
                if(nDigitado % i == 0){
                    printf(" %d ", i);
                }
            }
            printf("\n");
        }
        
            // Registra o maior número
            if(nDigitado >= nMaior){
                nMaior = nDigitado;
            }
            printf("-------------------------------------\n");
    }
    printf("A média dos ímpares é de: %.2f\n", mediaImpar);
    printf("O maior valor digitado foi: %d\n", nMaior);
    printf("\n\n\t//Programador: Taylan Hahn Fernandes");
}
