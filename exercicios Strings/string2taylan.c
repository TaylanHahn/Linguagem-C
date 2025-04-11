/**********************************************************************************************************
2) Escreva um programa que cria uma string, peça para o usuário digitar uma palavra.
Se a palavra digitada for "senha secreta", escreva a mensagem: "senha correta", senão escreva "senha incorreta". 
Usar strcmp para comparar. combinar com sentença if/else.
**********************************************************************************************************/

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

