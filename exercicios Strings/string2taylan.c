#include <stdio.h>
#include <string.h>

int main()
{
   char palavra[50] = "senha secreta";
   char tentativa [50];
   
   printf("Digite a palavra-chave: ");
   scanf(" %[^\n]s", tentativa);
   
   if(strcmp(tentativa, palavra)){
       printf("Acesso negado");
   } else {
       printf("Acesso liberado");
   }
   
}

