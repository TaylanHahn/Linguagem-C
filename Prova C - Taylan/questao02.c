/******************************************************************************
2 - Escreva um programa que leia do usuário 7 valores int a,b,c,d,e,f,g. (2,0pts)

a- Leitura dos valores (0,5pts) e apresentar em tela os valores lidos em cada variável.

b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a quantidade de números primos. (0,5 pts)

c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a quantidade de pares. (0,5 pts)

d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na tela a tabuada da soma dos números (0,5pts)

Apresentar os resultados, fazendo uso das funções definidas nos itens b/c/d.

*******************************************************************************/

#include <stdio.h>

// Declaração das funções
int primos(int a, int b, int c, int d, int e, int f, int g);
int pares(int a, int b, int c, int d, int e, int f, int g);
int mult(int a, int b, int c, int d, int e, int f, int g);

    // A - Leitura dos valores e apresentação dos mesmo
   int main()
   {
        int a,b,c,d,e,f,g;
        printf("Digite o valor de a: ");
        scanf("%d",&a);
        printf("Digite o valor de b: ");
        scanf("%d",&b);
        printf("Digite o valor de c: ");
        scanf("%d",&c);
        printf("Digite o valor de d: ");
        scanf("%d",&d);
        printf("Digite o valor de e: ");
        scanf("%d",&e);
        printf("Digite o valor de f: ");
        scanf("%d",&f);
        printf("Digite o valor de g: ");
        scanf("%d",&g);
        
        printf("\nValores lidos: %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g);
        
       // B - Função de numeros primos 
        int primos(int a, int b, int c, int d, int e, int f, int g){
            int prim=0;
            if(a%a==0) prim++;
            if(b%b==0) prim++;
            if(c%c==0) prim++;
            if(d%d==0) prim++;
            if(e%e==0) prim++;
            if(f%f==0) prim++;
            if(g%g==0) prim++;
            return prim;
        }
        printf("\nQuantidade de numeros primos: %d\n", primos(a,b,c,d,e,f,g));
        
        
        // C - Retorna a quantidade de pares
        int pares(int a, int b, int c, int d, int e, int f, int g){
            int res=0;
            if(a%2==0) res++;
            if(b%2==0) res++;
            if(c%2==0) res++;
            if(d%2==0) res++;
            if(e%2==0) res++;
            if(f%2==0) res++;
            if(g%2==0) res++;
            return res;
        }
        printf("\nPares: %d\n", pares(a,b,c,d,e,f,g));
        
        
        // D - Função que escreve a tabuada da soma
        int mult(int a, int b, int c, int d, int e, int f, int g){
            int soma, multiplica, i;
            soma = a+b+c+d+e+f+g;
            return soma;
        }
        // Obs: não consegui imprimir, não entendi porque o return deveria me devolver a soma e então usá-la.
         printf("\n A soma é de %d", soma);
         for(i=0;i<soma;i++){
                printf("%d x %d = %d\n", i, soma, mult(a,b,c,d,e,f,g));
            }
            
            
        printf("\n\n\tAluno e programador: Taylan Hahn Fernandes");
    }
    
    
    
    
    
    
    
    