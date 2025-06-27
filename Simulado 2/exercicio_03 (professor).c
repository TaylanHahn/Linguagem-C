/*
Questão 3 (3.0 pt): - Em uma eleição municipal, existem:
- 3 candidatos a prefeito: 91, 92 e 93
- 5 candidatos a vereador: 91111, 91112, 91113, 91114 e 91115
Os votos são informados através dos códigos acima.
77 - voto em branco para prefeito;
77777 - voto em branco para vereador
-Outro valor que não seja 12345: Voto Nulo;
Elabore um programa que leia para cada eleitor, o voto para vereador e o voto
para prefeito (nesta ordem). Repetir até que seja inserido o voto 12345 para
vereador, encerrando a votação. Os votos nulos e brancos devem ser
distintos para cada uma das eleições.
Calcule e escreva:
-total de votos para cada candidato em cada uma das eleições;
-total de votos nulos em cada uma das eleições;
-total de votos em branco em cada uma das eleições;
3.1 - Leitura correta dos dados (0,5pts);
3.2 - Estrutura de repetição (1,0pts);
3.3 - Cálculo correto e apresentação da Contagem de Votos para prefeito e para
Vereador (1,0pts);
3.4 - Informe o vencedor da eleição de prefeito (0,5pts)
Considere que não haverá empates na eleição para prefeito.
Nota: o Programa deve conter comentários e o nome do autor.
Deve ser exibido o nome do programador.
*/

#include <stdio.h>

int main(){
    int p1=0,p2=0,p3=0,pbranco=0,pnulo=0;
    int v1=0,v2=0,v3=0,v4=0,v5=0,vbranco=0,vnulo=0;
    int votoV, votoP;
    do{
        printf("Digite o voto para Vereador: ");
        scanf("%d",&votoV);
        if(votoV!=12345){
            printf("Digite o voto para Prefeito: ");
            scanf("%d",&votoP);
            switch(votoV){
                case 91111: v1++;break;
                case 91112: v2++;break;
                case 91113: v3++;break;
                case 91114: v4++;break;
                case 91115: v5++;break;
                case 77777: vbranco++;break;
                default: vnulo++;
            }
            switch(votoP){
                case 91: p1++; break;
                case 92: p2++; break;
                case 93: p3++; break;
                case 77: pbranco++; break;
                default: pnulo++;
            }
        }
    }while(votoV!=12345);
    printf("\nVoto para candidato 91111: %d\n",v1);
    printf("\nVoto para candidato 91112: %d\n",v2);
    printf("\nVoto para candidato 91113: %d\n",v3);
    printf("\nVoto para candidato 91114: %d\n",v4);
    printf("\nVoto para candidato 91115: %d\n",v5);
    printf("\nVoto em Branco vereador: %d\n",vbranco);
    printf("\nVoto nulo para vereador: %d\n\n",vnulo);
    
    printf("Voto para candidato 91: %d\n",p1);
    printf("Voto para candidato 92: %d\n",p2);
    printf("Voto para candidato 93: %d\n",p3);
    printf("Voto em Branco para Prefeito: %d\n",pbranco);
    printf("Voto nulo para Prefeito: %d\n",pnulo);

        if((p1>p2)&&(p1>p3)) printf("Vencedor Candidato 91!");
            else if((p2>p1)&&(p2>p3)) printf("Vencedor Candidato 92!");
                else if((p3>p1)&&(p3>p2)) printf("Vencedor Candidato 93!");
                else printf("empate");
}