/******************************************************************************
6 - Escreva programa que Leia turno e língua.
Esse programa deve ter uma função receba como parâmetros: Língua e Turno e imprima na tela a saudação correta.
os parâmetros para língua são: 1 português, 2 inglês, 3 espanhol, 4 italiano, 5 alemão. (pesquisar as saudações no google :)
Para o turno o parâmetro é dado pelos caracteres 'm', 't' e 'n'.
O programa deve repetir o processo até que a língua informada seja '0' (zero); 
******************************************************************************/

#include <stdio.h> 
#include <ctype.h> 

void saudarPortugues(char turno) {
    switch (turno) {
        case 'M':
            printf("BOM DIA\n");
            break;
        case 'T':
            printf("BOA TARDE\n");
            break;
        case 'N':
            printf("BOA NOITE\n");
            break;
        default:
            printf("Turno invalido para Portugues.\n");
    }
}

void saudarIngles(char turno) {
    switch (turno) {
        case 'M':
            printf("GOOD MORNING\n");
            break;
        case 'T':
            printf("GOOD AFTERNOON\n");
            break;
        case 'N':
            printf("GOOD EVENING\n");
            break;
        default:
            printf("Turno invalido para Ingles.\n");
    }
}

void saudarEspanhol(char turno) {
    switch (turno) {
        case 'M':
            printf("¡Buenos dias!\n");
            break;
        case 'T':
            printf("¡Buenas tardes!\n");
            break;
        case 'N':
            printf("¡Buenas noches!\n");
            break;
        default:
            printf("Turno invalido para Espanhol.\n");
    }
}

void saudarItaliano(char turno) {
    switch (turno) {
        case 'M':
            printf("Buongiorno!\n");
            break;
        case 'T':
            printf("Buonasera!\n"); 
            break;
        case 'N':
            printf("Buonanotte!\n");
            break;
        default:
            printf("Turno invalido para Italiano.\n");
    }
}

void saudarAlemao(char turno) {
    switch (turno) {
        case 'M':
            printf("Guten Morgen!\n");
            break;
        case 'T':
            printf("Guten Tag!\n"); 
            break;
        case 'N':
            printf("Gute Nacht!\n");
            break;
        default:
            printf("Turno invalido para Alemao.\n");
    }
}

void imprimirSaudacao(int lingua, char turno) {
    
    turno = toupper(turno); 
    switch (lingua) {
        case 1:
            saudarPortugues(turno);
            break;
        case 2:
            saudarIngles(turno);
            break;
        case 3:
            saudarEspanhol(turno);
            break;
        case 4:
            saudarItaliano(turno);
            break;
        case 5:
            saudarAlemao(turno);
            break;
        default:
            printf("Idioma invalido.\n");
            break;
    }
}

// --- Função Principal do Programa ---
int main() {
    int lingua;
    char turno;

    do {
        printf("\n----------------------------------\n");
        printf("Selecione a lingua:\n");
        printf("1 - Portugues\n");
        printf("2 - Ingles\n");
        printf("3 - Espanhol\n");
        printf("4 - Italiano\n");
        printf("5 - Alemao\n");
        printf("0 - SAIR\n");
        printf("Digite o codigo da lingua: ");
        scanf("%d", &lingua);

        if (lingua == 0) {
            printf("Saindo do programa. Ate mais!\n");
            break; 
        }

        if (lingua < 1 || lingua > 5) {
            printf("Codigo de lingua invalido. Por favor, tente novamente.\n");
            continue; // para voltar ao inicio do loop
        }

        printf("Digite o turno (M para Manha, T para Tarde, N para Noite): ");
        scanf(" %c", &turno); 

        printf("Resposta: ");
        imprimirSaudacao(lingua, turno); 
        
    } while (lingua != 0); 

    return 0; 
}