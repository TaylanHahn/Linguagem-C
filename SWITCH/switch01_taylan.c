
#include <stdio.h>

int main()
{
    int cep;
    
    printf("Digite o primeiro número do CEP do destino: \n");
    scanf("%d", &cep);
    
    switch(cep){
        case 1: 
        case 2:
        case 3:
            printf("Enviar para Sudeste (SP, RJ, ES, MG)");
            break;
        case 4:
            printf("Enviar para Região 4 (BA, SE)");
            break;
        case 5:
            printf("Enviar para Região 5 (PE, AL, PB, RN)");
            break;
        case 6:
            printf("Enviar para Região 6 (CE, PI, MA, PA, AP, AM, RR, AC )");
            break;
        case 7: 
            printf("Enviar para Região 7 (DF, GO, TO, MT, RO, MS)");
            break;
        case 8:
        case 9:
            printf("Enviar para Sul (PR, SC, RS)");
            break;
        
        default:
           printf("Código inválido.");
    }
}