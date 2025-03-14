
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