/*
2 - Escreva um programa que leia do usuário 7 valores int a,b,c,d,e,f,g. (2,0pts)
a- Leitura dos valores (0,5pts)
b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne o
maior valor ímpar. (0,5 pts)
c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne o
menor valor par. (0,5 pts)
d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
tela a média inteira dos valores (0,5pts)
Apresentar os resultados, fazendo uso das funções definidas nos itens b/c/d
*/

#include <stdio.h>

int maiorImp(int a, int b, int c, int d, int e, int f, int g){
    int resp=-2147483648;
    if((a>resp)&&(a%2==1)) resp=a;
    if((b>resp)&&(b%2==1)) resp=b;
    if((c>resp)&&(c%2==1)) resp=c;
    if((d>resp)&&(d%2==1)) resp=d;
    if((e>resp)&&(e%2==1)) resp=e;
    if((f>resp)&&(f%2==1)) resp=f;
    if((g>resp)&&(g%2==1)) resp=g;
    return resp;
}

int menorPar(int a, int b, int c, int d, int e, int f, int g){
    int resp=2147483647;
    if((a<resp)&&(a%2==0)) resp=a;
    if((b<resp)&&(b%2==0)) resp=b;
    if((c<resp)&&(c%2==0)) resp=c;
    if((d<resp)&&(d%2==0)) resp=d;
    if((e<resp)&&(e%2==0)) resp=e;
    if((f<resp)&&(f%2==0)) resp=f;
    if((g<resp)&&(g%2==0)) resp=g;
    return resp;
}

int mediaInt(int a, int b, int c, int d, int e, int f, int g){
    return(a+b+c+d+e+f+g)/7;
}

int main(){
    int a, b, c, d, e, f, g;
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
    printf("Item b: %d\n",maiorImp(a,b,c,d,e,f,g));
    printf("Item c: %d\n",menorPar(a,b,c,d,e,f,g));
    printf("Item d: %d\n",mediaInt(a,b,c,d,e,f,g));
}