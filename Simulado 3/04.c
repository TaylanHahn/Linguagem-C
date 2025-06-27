/*Criar uma matriz de inteiro de dimensão X (veja sobre o valor do X abaixo).
A matriz deve ser preenchida automaticamente, fazendo uso de laço, o primeiro número deve ser Y e ir
aumentando em Y unidades em cada célula.
Você deve criar uma função que recebe como parâmetro a matriz e o número da coluna; essa função deve
calcular a soma da coluna indicada.
Apresentar:
a - A matriz preenchida (usando laço)
b - Soma de cada uma das linhas; (usar função)
c - Média dos elementos; (usar laço)
d - Percorrer a matriz e verificar qual o Maior número ímpar; (usar laço)
e - Quantidade de números divisíveis por 3; (usar laço)
O programa deve imprimir o NOME e o CPF do programador.

CPF do Fabio ?26.???.???-??
entao a dimensao da matriz deve ser 7
e deve ser preenchida de 15 em 15
*/

#include <stdio.h>

int somaLinha(int m[7][7],int linha){
    int i, resp=0;
    for(i=0;i<7;i++)
        resp=resp+m[linha][i];
    return resp;
}



int main(){
    int matriz[7][7];
    int l,c,i=15, somaTudo=0, maiorImp=0, div3=0;
    //item a;
    for(l=0;l<7;l++){
        for(c=0;c<7;c++){
            matriz[l][c]=i;
            i=i+15;
            printf("%3d ",matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nItem B\n");
    for(i=0;i<7;i++)
        printf("Soma da Linha %d: %d\n",i,somaLinha(matriz,i));

    //item C
     for(l=0;l<7;l++)
        for(c=0;c<7;c++)
            somaTudo=somaTudo+matriz[l][c];//item C
    printf("\nItem C - Media Matriz: %.2f\n",somaTudo/49.0);


    //item d
    for(l=0;l<7;l++)
        for(c=0;c<7;c++)
            if(maiorImp<matriz[l][c]&&(matriz[l][c]%2==1))
                maiorImp=matriz[l][c];
    printf("\nItem D - Maior Impar: %d\n",maiorImp);

    //item e
    for(l=0;l<7;l++)
        for(c=0;c<7;c++)
            if(matriz[l][c]%3==0)
                div3++;
    printf("\nItem E - Divisiveis por 3: %d",div3);
    
    return 0;
}