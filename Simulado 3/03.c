/*
Questão 3 (3.0 pt): - Em uma eleição de Miss existem CINCO candidatas.
Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
1, 2, 3, 4, 5 = Candidata 1, Candidata 2, Candidata 3, Candidata 4, Candidata 5 respectivamente;
7 = voto em branco;
-Outro valor que não seja 0: Voto Nulo;
Elabore um algoritmo que leia o código da candidata que receberá o voto. Lendo uma quantidade
indefinida de votos até a eleição ser finalizada, com o voto 0.
Calcule e escreva:
-total de votos para cada candidata;
-total de votos nulos;
-total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.

*/

#include <stdio.h>

int main(){
    int c1=0,c2=0,c3=0,c4=0,c5=0,branco=0,nulo=0, voto;
    do{
        printf("Digite seu voto: ");
        scanf("%d",&voto);
        switch(voto){
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: c5++; break;
            case 7: branco++; break;
            case 0: break;
            default: nulo++; break;
        }
    }while(voto!=0);
    printf("Candidata 1: %d votos\n",c1);
    printf("Candidata 2: %d votos\n",c2);
    printf("Candidata 3: %d votos\n",c3);
    printf("Candidata 4: %d votos\n",c4);
    printf("Candidata 5: %d votos\n",c5);
    printf("Votos em branco: %d\n",branco);
    printf("Votos nulos: %d votos",nulo);
}