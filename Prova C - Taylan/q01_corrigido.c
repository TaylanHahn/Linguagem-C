/******************************************************************************
Questão 1 da prova - correção do professor
*******************************************************************************/

#include <stdio.h>

int divisores(int n){
    int resp=0, i;
    for(i=1;i<=n;i++){
        if(n%i==0) resp++;
    }
    return resp;
}

//item c
int primosLinha(int mat[10][10], int l){
    int coluna, resp=0;
    for(coluna=0;coluna<10;coluna++){
        if(divisores(mat[l][coluna])==2) resp++;
    }
    return resp;
}

//item d
int primosMatriz(int mat[10][10]){
    int resp=0,linha;
    for(linha=0;linha<10;linha++) resp=resp+primosLinha(mat,linha);
    return resp;
}

//item E
int somaDiv7(int mat[10][10]){
    int l,c,resp=0;
    for(l=0;l<10;l++){
        for(c=0;c<10;c++){
            if(mat[l][c]%7==0) resp=resp+mat[l][c];
        }
    }
    return resp;
}

int main() {
    int m[10][10];
    int lin,col;
    float somaDP=0;
    //item A
    for(lin=0;lin<10;lin++){
        for(col=0;col<10;col++){
            m[lin][col]=(lin*10+col+1)*1+10;
        }
    }
    for(lin=0;lin<10;lin++){
        for(col=0;col<10;col++){
            printf("%3d ",m[lin][col]);
        }
        printf("\n");
    }
    //item b
    for(lin=0;lin<10;lin++){
        somaDP=somaDP+m[lin][lin];
    }
    printf("Media da Diagonal principal: %.2f\n",somaDP/10);
    //item c
    for(lin=0;lin<10;lin++) printf("Primos da linha %d: %d\n",lin, primosLinha(m,lin));
    //item d
    printf("Primos na Matriz inteira: %d\n",primosMatriz(m));
    //item e
    printf("Soma dos divisiveis por 7: %d",somaDiv7(m));
    
}