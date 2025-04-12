/**********************************************************************************************************
Exercício 7.  Calcule o IMC. De acordo com (b), o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
(a) https://www.mdsaude.com/obesidade/calcule-o-seu-peso-ideal-e-imc/
(b)https://www.programasaudefacil.com.br/calculadora-de-imc
Leia a altura (em metros) e o peso em kilos de uma pessoa, calcule o IMC e indique a situação de acordo com a tabela em (a).
(Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)
**********************************************************************************************************/

#include <stdio.h>

int main()
{
	float peso, altura, imc;

	printf("\nInforme o peso em kg: ");
	scanf("%f", &peso);

	printf("\nInforme a altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);

	printf("\nSeu imc é : %.2f", imc);

	if(imc < 18.5) {
		printf("\n Status: Baixo peso");
	} else if (imc < 25) {
		printf("\nStatus: Peso ideal");
	} else if (imc < 30) {
		printf("\nStatus: Sobrepeso");
	} else if (imc < 40) {
		printf("\nStatus: Obesidade");
	} else {
		printf("\nStatus: Obesidade III");
	}
	
	return 0;
}
