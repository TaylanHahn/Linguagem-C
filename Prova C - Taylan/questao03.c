/******************************************************************************
Questão 3 (3.0 pt): - Em uma pesquisa os entrevistados devem responder:
- Quantos serviços de streaming eles pagam assinatura (audio e video);
- Quantas horas assistem por semana (número inteiro);
- Informe a sua a renda em salários mínimos (número inteiro)
Elabore um algoritmo que faça as 3 perguntas e leia as respostas dos entrevistados;
As entrevistas devem continuar até que seja informado o número -1 para a quantidade de serviços de streaming.
*******************************************************************************/

#include <stdio.h>

int main() {
	int qtdStr=0, contStr=0, cont=0, contHoras=0, qtdHoras=0, renda=0, encerrar=0; 
	float salario=0.0, somaRenda=0.0, rendaMaisTres=0.0, rendaMaisVinte=0.0, mediaStr=0.0, mediaRendaTres=0.0, mediaRendaVinte=0.0;

	do{
	    // Printf e Scanf para colher os dados
		printf("Quantos servicos de streaming voce paga? ");
		scanf("%d", &qtdStr);
		contStr+=qtdStr; // Soma o total de streamings assinados
		cont++; // Soma o total de entrevistados
		
		printf("Quantas horas semanais de streaming voce assiste? ");
		scanf("%d", &qtdHoras);
		contHoras++;
		
		printf("Informe sua renda em salarios minimos? ");
		scanf("%d", &renda);
		salario = renda * 1500; // Converte a renda (int) em salario (float)
		somaRenda+=salario; // Soma a renda total dos entrevistados
		
		// Soma a renda no caso dos 3 streamings
		if(qtdStr > 3){
		    rendaMaisTres+=salario;
		}
		
		
		if(qtdHoras > 20){
		    rendaMaisVinte+=salario;
		}
		
		printf("Digite 1 para continuar -1 para encerrar a pesquisa?");
        scanf("%d", &encerrar);
        
        if(encerrar == -1){
            break;
        }
		
	}while(encerrar!=-1);
	
	// A - Média de serviços de streaming
		mediaStr = contStr / cont;
		printf("\nA média de serviços de streaming por entrevistado é de: %f", mediaStr);
		
	// B - Média da renda de quem assina mais de 3 streamings
		mediaRendaTres = rendaMaisTres / somaRenda;
		printf("\nA média da renda de quem assina 3 ou mais streamings é de: %f", mediaRendaTres);
		
	// C - Média da renda de quem assina mais de 3 streamings
		mediaRendaVinte = rendaMaisVinte / somaRenda;
		printf("\nA média da renda de quem assina 3 ou mais streamings é de: %f", mediaRendaVinte);
		
		
		printf("\n\n\tAluno e programador: Taylan Hahn Fernandes");
		
}