
#include <stdio.h>

int main()
{
	char nome [100];
	int idade;

	printf("Digite seu nome: ");
	scanf(" %[^\n]s", nome);
	printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade < 18){
        printf("%s é menor de idade", nome);
    } else{
        printf("%s é maior de idade", nome);
    }
}
