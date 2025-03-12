/* 
 * Arquivo:   literais1.c
 * Autor: Alex Dias Gonsales
 *
 * Objetivos:
 * Este exemplo mostra os literais inteiros da linguagem C, ou seja, as formas 
 * de se representar os dados em decimal (sem sinal), octal e hexadecimal.
 * Também é mostrado o literal caractere.
 *
 * Também mostra a função printf() e como imprimir em formatos decimal (sem sinal),
 * hexadecimal, octal e caractere.
 */

int main(int argc, char** argv) {

  //Declara a variável uc do tipo "unsigned char", ou seja, binário puro (sem sinal) de 8 bits.
  unsigned char uc;
 
  //Alguns exemplos de equivalência de valores:
  //Binário  - decimal - hexa - octal - catactere
  //01100001 =  97     = 61h  = 141o  = 'a'
  //01100010 =  98     = 62h  = 142o  = 'b'
  //01100011 =  99     = 63h  = 143o  = 'c'
  //...
    
  //Alguns formatos para a função printf():
  //%u = decimal sem sinal.
  //%x = hexadecimal.
  //%o = octal.
  //%c = caractere.

  //Literal decimal
  uc = 97;
  printf("%u \n", uc);

  //Literal hexadecimal: iniciar com 0x
  uc = 0x61;
  printf("%u \n", uc);
  
  //Literal octal: iniciar com 0 (zero) a esquerda
  uc = 0141;
  printf("%u \n", uc);
  
  //Literal caractere: colocar entre apóstrofo (aspas simples)
  uc = 'a';
  printf("%u \n", uc);
    
  system("pause");
}