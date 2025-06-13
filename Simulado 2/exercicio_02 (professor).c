/*
2 - Escreva um programa que leia do usuário 6 valores INT a,b,c,d,e,f. (2,0pts)
a- Leitura dos valores e apresentar os resultados dos itens b,c,d (0,5pts)
b- Escreva uma função que recebe como parâmetro os valores do tipo int
A,B,C,D,E,F e retorne o maior elemento. (0,5 pts)
c- Escreva uma função que recebe como parâmetro os valores do tipo int
A,B,C,D,E,F e retorne a quantidade de elementos pares. (0,5 pts)
d- Escreva uma função que recebe como parâmetro os valores do tipo float
A,B,C,D,E,F e escreve na tela a SOMA dos valores (0,5pts)
*/

#include <stdio.h>

int maior(int a, int b, int c, int d, int e, int f){
    int r=a;
    if(r<b) r=b;
    if(r<c) r=c;
    if(r<d) r=d;
    if(r<e) r=e;
    if(r<f) r=f;
    return r;
}

int pares(int a, int b, int c, int d, int e, int f){
    int res=0;
    if(a%2==0) res++;
    if(b%2==0) res++;
    if(c%2==0) res++;
    if(d%2==0) res++;
    if(e%2==0) res++;
    if(f%2==0) res++;
    return res;
}

int soma(int a, int b, int c, int d, int e, int f){
    return a+b+c+d+e+f;
}


int main(){
    int a,b,c,d,e,f;
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
    
    printf("Valores lidos: %d %d %d %d %d %d\n",a,b,c,d,e,f);
    printf("Maior valor: %d\n",maior(a,b,c,d,e,f));
    printf("Pares: %d\n",pares(a,b,c,d,e,f));
    printf("Soma: %d\n",soma(a,b,c,d,e,f));
}