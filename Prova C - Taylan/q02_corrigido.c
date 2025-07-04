/******************************************************************************
Questão 2 da prova - correção do professor
*******************************************************************************/

#include <stdio.h>

int divisores(int n){
    int resp=0, i;
    for(i=1;i<=n;i++){
        if(n%i==0) resp++;
    }
    return resp;
}

int primos(int a, int b, int c, int d, int e, int f, int g){
    int resp=0;
    if(divisores(a)==2)resp++;
    if(divisores(b)==2)resp++;
    if(divisores(c)==2)resp++;
    if(divisores(d)==2)resp++;
    if(divisores(e)==2)resp++;
    if(divisores(f)==2)resp++;
    if(divisores(g)==2)resp++;
    return resp;
}

int pares(int a, int b, int c, int d, int e, int f, int g){
    int resp=0;
    if(a%2==0)resp++;
    if(b%2==0)resp++;
    if(c%2==0)resp++;
    if(d%2==0)resp++;
    if(e%2==0)resp++;
    if(f%2==0)resp++;
    if(g%2==0)resp++;
    return resp;
}

int tabuada(int a, int b, int c, int d, int e, int f, int g){
    int soma=a+b+c+d+e+f+g;
    int i;
    for(i=1;i<11;i++){
        printf("%d x %d = %d\n",soma,i,soma*i);
    }
}

int main(){
    int a,b,c,d,e,f,g;
    printf("Digite o valor a:");
    scanf("%d",&a);
    printf("Digite o valor b:");
    scanf("%d",&b);
    printf("Digite o valor c:");
    scanf("%d",&c);
    printf("Digite o valor d:");
    scanf("%d",&d);
    printf("Digite o valor e:");
    scanf("%d",&e);
    printf("Digite o valor f:");
    scanf("%d",&f);
    printf("Digite o valor g:");
    scanf("%d",&g);
    printf("valor em a: %d\n",a);
    printf("valor em b: %d\n",b);
    printf("valor em c: %d\n",c);
    printf("valor em d: %d\n",d);
    printf("valor em e: %d\n",e);
    printf("valor em f: %d\n",f);
    printf("valor em g: %d\n",g);
    printf("Primos: %d\n",primos(a,b,c,d,e,f,g));
    printf("Pares: %d\n",pares(a,b,c,d,e,f,g));
    tabuada(a,b,c,d,e,f,g);
}
    
    
    
    
    
    
    
    