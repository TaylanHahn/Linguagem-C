/******************************************************************************

9) Música dos Elefantes (se balançando)
Escreva um programa que imprima a letra da música “Elefantes se balançavam” até o número informado pelo usuário.
Use um laço de repetição (for, while ou do while).
O padrão da música deve seguir:

1 elefante se balançava numa teia de aranha,
Mas como a teia não se arrebentou,
Foi chamar outro elefante.

2 elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Foram chamar outro elefante.

...

N elefantes se balançavam numa teia de aranha,
Mas como a teia não se arrebentou,
Todos foram para o chão!

Regras:
Use o singular para 1 elefante e o plural para os demais.
No último verso, troque a última linha por: “Todos foram para o chão!”

*******************************************************************************/

#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Digite o número de elefantes: ");
    scanf("%d", &n);

    printf("\nLetra da música:\n");

    while (i <= n) {
        if (i == 1) {
            printf("%d elefante se balançava numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,\n");
            printf("Foi chamar outro elefante.\n\n");
        } else if (i == n) {
            printf("%d elefantes se balançavam numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,\n");
            printf("Todos foram para o chão!\n\n");
        } else {
            printf("%d elefantes se balançavam numa teia de aranha,\n", i);
            printf("Mas como a teia não se arrebentou,\n");
            printf("Foram chamar outro elefante.\n\n");
        }
           i++;
    }

    return 0;
}





