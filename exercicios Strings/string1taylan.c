#include <stdio.h>
#include <string.h>

int main()
{
   char nome[100];
   
   printf("Digite seu nome completo: ");
   scanf(" %[^\n]s", nome);
   printf("Nome: %s\n", nome);
   
   int cap = sizeof(nome);
   printf("A capacidade dessa variável é de: %d\n", cap);
   int tam = strlen(nome);
   printf("O tamanho da string é de: %d", tam);
   
}

