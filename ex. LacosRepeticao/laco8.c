/******************************************************************************

8) Apuração de votos
Em uma eleição presidencial há três candidatos. Os votos são registrados por meio de códigos:
Código  Candidato
1       Zezinho
2       Huguinho
3       Luizinho
4       Voto em Branco
5       Voto Nulo
    
Escreva um programa que:
Leia votos (códigos) até que seja digitado o valor 0, o que encerra a votação;
Desconsidere votos com códigos inválidos (diferentes de 0 a 5);
Ao final, exiba:
Total de votos para cada candidato;
Total de votos nulos e em branco;
Nome do candidato vencedor (em caso de empate, indique que houve empate).

*******************************************************************************/

#include <stdio.h>

int main() {
	int voto=0, candidato1=0, candidato2=0, candidato3=0, branco=0, nulo=0;


	printf("Eleições 2025\n");
	printf("-----------------------------------\n");
	printf("CC3digo |   Candidato  \n");
	printf(" 1   -  Zezinho  \n");
	printf(" 2   -  Huguinho    \n");
	printf(" 3   -  Luizinho     \n");
	printf(" 4   -  Voto em branco      \n");
	printf(" 5   -  Nulo    \n");
	printf(" 0   -  Encerra a votação    \n");
	printf("-----------------------------------\n");

	do{
		printf("Digite seu voto: ");
		scanf("%d", &voto);

		switch (voto) {
		case 1: candidato1++; break;
		case 2: candidato2++; break;
		case 3: candidato3++; break;
		case 4: branco++; break;
		case 5: nulo++; break;
		case 0: break;
		}
	}while(voto!=0);


	printf("Zezinho teve: %d votos.\n", candidato1);
	printf("Huguinho teve: %d votos.\n", candidato2);
	printf("Luizinho teve: %d votos.\n", candidato3);
	printf("Votos em branco: %d votos.\n", branco);
	printf("Votos nulos: %d votos.\n", nulo);
	
	if(candidato1>candidato2 && candidato1>candidato3){
	    printf("Zezinho é o vencedor");
	} else if(candidato1<candidato2 && candidato2>candidato3){
	    printf("Huguinho é o vencedor");
	} else if(candidato3>candidato1 && candidato2<candidato3){
	    printf("Luizinho é o vencedor");
	} else{
	    printf("Haverá segundo turno.");
	}
}




