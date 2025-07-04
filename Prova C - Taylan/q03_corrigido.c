/******************************************************************************
Questão 3 da prova - correção do professor
*******************************************************************************/

#include <stdio.h>
int main(){
    int stream,horas,renda;
    int somaStr=0,entrev=0, renda4Str=0,pess4Str=0,Renda21h=0,pess21h=0;
    do{
        printf("Digite quantos Servicos voce assina: ");
        scanf("%d",&stream);
        if(stream!=-1){
            somaStr=somaStr+stream;
            entrev++;
            printf("Quantas horas voce usa por semana? ");
            scanf("%d",&horas);
            printf("Qual sua renda em Salarios-minimos? ");
            scanf("%d",&renda);
            if(stream>3){
                renda4Str=renda4Str+renda;
                pess4Str++;
            }
            if(horas>20){
                Renda21h=Renda21h+renda;
                pess21h++;
            }
        }
    }while(stream!=-1);
    printf("Media de assinaturas por entrevistado: %.1f\n",somaStr*1.0/entrev*1.0);
    printf("Renda de quem assina mais que 3 servicos: %.1f\n",renda4Str*1.0/pess4Str*1.0 );
    printf("Renda de quem assiste mais que 20h:  %.1f\n",Renda21h*1.0/pess21h*1.0);
}