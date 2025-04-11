/******************************************************************************

Música dos Elefantes (Incomodam)
Escreva um programa que imprima a letra da música “Elefantes incomodam muita gente” utilizando apenas laços while e do while. Não é permitido usar for.
Após a impressão da música, o programa deve contar e exibir a quantidade de vezes que aparecem as palavras "incomoda" e "incomodam".
Letra completa da música:

1 elefante incomoda muita gente
2 elefantes incomodam, incomodam muito mais
3 elefantes incomodam muita gente
4 elefantes incomodam, incomodam, incomodam, incomodam muito mais
5 elefantes incomodam muita gente
6 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
7 elefantes incomodam muita gente
8 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais
9 elefantes incomodam muita gente
10 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito mais

10 elefantes incomodam muita gente
9 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
8 elefantes incomodam muita gente
7 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, incomodam muito menos
6 elefantes incomodam muita gente
5 elefantes incomodam, incomodam, incomodam, incomodam, incomodam, muito menos
4 elefantes incomodam muita gente
3 elefantes incomodam, incomodam, incomodam muito menos
2 elefantes incomodam muita gente
1 elefante incomoda muito menos
    
Ao final da execução, o programa deve imprimir:
Quantidade total de ocorrências das palavras “incomoda” e “incomodam”.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int elefantes, i = 1, j;
    int totalIncomoda = 0, totalIncomodam = 0;

    printf("Digite o número de elefantes: ");
    scanf("%d", &elefantes);

    printf("\nLetra da música:\n");

    while (i <= elefantes) {
        if (i == 1) {
            printf("%d elefante incomoda muita gente\n", i);
            totalIncomoda++; 
        } else {
            printf("%d elefantes incomodam", i);
            totalIncomodam++; 

            j = 1;
            while (j < i) {
                printf(", incomodam");
                totalIncomodam++; 
                j++;
            }
            printf(" muito mais\n");
        }
        i++;
    }

    do {
        if (elefantes == 1) {
            printf("%d elefante incomoda muito menos\n", elefantes);
            totalIncomoda++; 
        } else {
            printf("%d elefantes incomodam", elefantes);
            totalIncomodam++; 

            j = 1;
            while (j < elefantes) {
                printf(", incomodam");
                totalIncomodam++; 
                j++;
            }
            printf(" muito menos\n");
        }
        elefantes--;
    } while (elefantes > 0);


    printf("\nQuantidade total de \"incomoda\": %d\n", totalIncomoda);
    printf("Quantidade total de \"incomodam\": %d\n", totalIncomodam);

    return 0;
}




