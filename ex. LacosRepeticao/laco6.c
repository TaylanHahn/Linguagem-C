/**********************************************************************************************************

 6) Simulador de poupança
Um valor de R$100,00 é depositado todo mês em uma poupança que rende 0,5% ao mês.
Escreva um programa que calcule e mostre o valor acumulado mês a mês durante 24 meses (2 anos).
Use um laço de repetição. Não é necessário arredondar ou decompor o valor.

**********************************************************************************************************/

#include <stdio.h>

int main() {
    double saldo = 0.0;
    double depositoMensal = 100.0;
    double taxaRendimento = 0.005; 

    printf("Mes\tSaldo Acumulado\n");
    for (int mes = 1; mes <= 24; mes++) {
        saldo += depositoMensal; 
        saldo += saldo * taxaRendimento; 
        printf("%d\tR$ %.2f\n", mes, saldo);
    }

    return 0;
}
