/* 
 * Arquivo:   tipo_uchar.c
 * Autor: Alex Dias Gonsales
 *
 * Objetivos:
 * Mostra o tipo unsigned char (inteiro sem sinal com 8 bits) bem como
 * o maior valor possível (binário puro sem sinal) que se pode armazenar em 8 bits.
 */

int main() {
    //Variável 8 bits binário puro (somente inteiros positivos).
    unsigned char uc;

    //Coloque um valor qualquer na variavel uc e veja sua representacao em decimal, hexa e octal.
    //Faça a conversão para binário para confirmar.
    uc = 23;
    
    //Convenção utilizada:
    // X - Hexadecimal
    // o - Octal
    // b - binário
    printf("decimal     = %u \n", uc);
    printf("hexadecimal = %Xh \n", uc);
    printf("octal       = %oo \n", uc);

    printf("\n");
    
    //Maior valor 8 bits binário puro = 11111111b = 255.
    //Tente colocar um número maior que 255 e veja o que acontece.
    //Qual a lógica? Faça a conversão para binário e verifique realmente o que está acontecendo.
    uc = 255;
    printf("decimal     = %u \n", uc);
    printf("hexadecimal = %Xh \n", uc);
    printf("octal       = %oo \n", uc);

    printf("\n");

    system("pause");
}