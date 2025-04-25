/******************************************************************************

Questão 3: - Em uma eleição existem 4 candidatos à vereador e 3 candidatos à
prefeitura. O programa deve realizar a leitura do voto para vereador e para
prefeito.

Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
Para vereador os códigos são:
66666 para candidato A;
77777 para candidato B;
88888 para candidato C;
99999 para candidato D;

Para prefeito os códigos são: 
99 para candidato X , 
88 para Candidato Y; 
77 para candidato Z;

111 = voto em branco (para ambas as votações);
Outro valor = Voto Nulo;

Elabore um algoritmo que realize a leitura de ambos os votos (vereador e depois
para prefeito). leia os códigos do candidato que receberá o voto. O programa
deverá ler 7 votos (7 para vereador e 7 para prefeito) alternadamente.

Calcule e escreva:
-total de votos para cada candidato e seu respectivo percentual de votos sobre os
votos válidos*; (em cada uma das duas eleições)
-total de votos nulos; (em cada uma das duas eleições)
-total de votos em branco; (em cada uma das duas eleições)
Votos válidos são todos os votos - nulos.
Lembre-se: os votos em branco e nulos podem ser diferentes nas duas
eleições.
a - Leitura correta dos dados;
b - Estrutura de repetição ;
c - Cálculo correto da Contagem de Votos ;

*******************************************************************************/

#include <stdio.h>

int main() {
    int votosVereador[7], votosPrefeito[7];
    int iVereadorA = 0, iVereadorB = 0, iVereadorC = 0, iVereadorD = 0;
    int vbVereador = 0, vnVereador = 0;
    int iPrefeitoX = 0, iPrefeitoY = 0, iPrefeitoZ = 0;
    int vbPrefeito = 0, vnPrefeito = 0;
    //LEGENDA: i = contador, vv = votos váidos, vb = votos brancos, vn = votos nulos

    for (int i = 0; i < 7; i++) {
        printf("\n-----------------------------\n");
        printf("Digite o voto para vereador\n");
        printf("Vereador A - 66666\n");
        printf("Vereador B - 77777\n");
        printf("Vereador C - 88888\n");
        printf("Vereador D - 99999\n");
        printf("Voto em branco - 111\n");
        printf("Voto nulo - 0\n");
        scanf("%d", &votosVereador[i]);

        if (votosVereador[i] == 66666)
            iVereadorA++;
        else if (votosVereador[i] == 77777)
            iVereadorB++;
        else if (votosVereador[i] == 88888)
            iVereadorC++;
        else if (votosVereador[i] == 99999)
            iVereadorD++;
        else if (votosVereador[i] == 111)
            vbVereador++;
        else
            vnVereador++;
            
        printf("\n----------------------------\n");
        printf("Digite o voto para prefeito\n");
        printf("PrefeitoX - 99\n");
        printf("PrefeitoY - 88\n");
        printf("PrefeitoZ - 77\n");
        printf("Voto em branco - 111\n");
        printf("Voto nulo - 0\n");
        scanf("%d", &votosPrefeito[i]);

        if (votosPrefeito[i] == 99)
            iPrefeitoX++;
        else if (votosPrefeito[i] == 88)
            iPrefeitoY++;
        else if (votosPrefeito[i] == 77)
            iPrefeitoZ++;
        else if (votosPrefeito[i] == 111)
            vbPrefeito++;
        else
            vnPrefeito++;
    }

    // Resultado dos vereadores
    int vvVereador = 7 - vnVereador;
    printf("\nResultados para vereador:\n");
    printf("Candidato A: %d votos (%.2f%%)\n", iVereadorA, vvVereador > 0 ? (iVereadorA * 100.0 / vvVereador) : 0);
    printf("Candidato B: %d votos (%.2f%%)\n", iVereadorB, vvVereador > 0 ? (iVereadorB * 100.0 / vvVereador) : 0);
    printf("Candidato C: %d votos (%.2f%%)\n", iVereadorC, vvVereador > 0 ? (iVereadorC * 100.0 / vvVereador) : 0);
    printf("Candidato D: %d votos (%.2f%%)\n", iVereadorD, vvVereador > 0 ? (iVereadorD * 100.0 / vvVereador) : 0);
    printf("Votos em branco: %d\n", vbVereador);
    printf("Votos nulos: %d\n", vnVereador);

    // Resultado do prefeito
    int vvPrefeito = 7 - vnPrefeito;
    printf("\nResultados para prefeito:\n");
    printf("Candidato X: %d votos (%.2f%%)\n", iPrefeitoX, vvPrefeito > 0 ? (iPrefeitoX * 100.0 / vvPrefeito) : 0);
    printf("Candidato Y: %d votos (%.2f%%)\n", iPrefeitoY, vvPrefeito > 0 ? (iPrefeitoY * 100.0 / vvPrefeito) : 0);
    printf("Candidato Z: %d votos (%.2f%%)\n", iPrefeitoZ, vvPrefeito > 0 ? (iPrefeitoZ * 100.0 / vvPrefeito) : 0);
    printf("Votos em branco: %d\n", vbPrefeito);
    printf("Votos nulos: %d\n", vnPrefeito);
    
    printf("\n\n\t//Programador: Taylan Hahn Fernandes");

    return 0;
}








