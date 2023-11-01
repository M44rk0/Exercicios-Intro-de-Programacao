//Marco Antonio Medeiros Nascimento

#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define TAMANHO_MAX 1000

int main() {
    char string[TAMANHO_MAX];
    char stringlimpa[TAMANHO_MAX];
    char contrario[TAMANHO_MAX];
    int palindromo, i, j, tamanho;
    
    while (1) {
        printf("Digite uma palavra (digite PARAR para encerrar a leitura): ");
        fgets(string, TAMANHO_MAX, stdin);
        
        if (strcmp(string, "PARAR") == 0) {
            break;
        }
        
        tamanho = strlen(string);
        
        j = 0;
        for (i = 0; i < tamanho; i++) {
            if (isalnum(string[i])) {
                stringlimpa[j++] = tolower(string[i]);
            }
        }
        stringlimpa[j] = '\0';
        
        tamanho = strlen(stringlimpa);
        
        for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
            contrario[j] = stringlimpa[i];
        }
        contrario[j] = '\0';
        
        palindromo = strcmp(stringlimpa, contrario) == 0;
        
        if (palindromo) {
            printf("Sim\n");
        } else {
            printf("Não\n");
        }
    }
    
    return 0;
}







