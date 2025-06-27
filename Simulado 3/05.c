/*Ao final, seu programa deve apresentar:
a - total de votos Nulos;
b - total de votos em Branco;
c - total de votos de cada Candidato;
d - vencedor da eleição (suponha que não haverá empate);
Exemplo:
Fabio Yoshimitsu Okuyama - Nascimento 1979
CPF 123.456.789-07
Neste caso, os candidatos e respectivos números seriam:
Candidato 1: Fabio - Número 123
Candidato 2: Okuyama - Número 456
Candidato 3 : Oibaf - Número 789
Candidato 4: Amayuko - Número 1979
Voto Branco: Numero 07*/

#include <stdio.h>

int main(){
    int c1=0,c2=0,c3=0,c4=0,br=0,nulos=0,voto;
    do{
        printf("Digite seu voto: ");
        scanf("%d",&voto);
        switch(voto){
            case 123:c1++;break;
            case 456:c2++;break;
            case 789:c3++;break;
            case 1979:c4++;break;
            case 9999:break;
            case 7:br++;break;
            default: nulos++;
        }
    }while(voto!=9999);

    printf("\nTotal de votos nulos: %d\n",nulos);
    printf("Total de votos brancos: %d\n",br);
    printf("Total de votos para Fabio: %d\n",c1);
    printf("Total de votos para Okuyama: %d\n",c2);
    printf("Total de votos para Oibaf: %d\n",c3);
    printf("Total de votos para Amayuko: %d\n\n",c4);
    
    
    if(c1>c2 && c1>c3 && c1>c4) printf("Vencedor Fabio");
    if(c2>c1 && c2>c3 && c2>c4) printf("Vencedor Okuyama");
    if(c3>c1 && c3>c2 && c3>c4) printf("Vencedor Oibaf");
    if(c4>c1 && c4>c2 && c4>c3) printf("Vencedor Amayuko");
    
    return 0;
}