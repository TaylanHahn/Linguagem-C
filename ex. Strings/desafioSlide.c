#include <stdio.h>
#include <string.h>

int main()
{
	char string1 [100], string2 [100];

	printf("\nInsira uma frase: ");
	scanf(" %[^\n]s", string1);
	int cap1 = sizeof(string1);
	int tam1 = strlen(string1);
	printf("\nTamanho da string:%d", tam1);
	printf("\nCapacidade da string:%d\n", cap1);

	printf("\nInsira outra frase: ");
	scanf(" %[^\n]s", string2);
	int cap2 = sizeof(string2);
	int tam2 = strlen(string2);
	printf("\nTamanho da string: %d", tam2);
	printf("\nCapacidade da string: %d", cap2);
}