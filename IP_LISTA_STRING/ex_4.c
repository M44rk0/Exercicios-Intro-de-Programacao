/******************************************************************************

4. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.


*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

int main()
{
    int tamanho, i;
    char palavra[MAX];
    int palavraASCII[MAX];
    
    printf("Digite uma Palavra: ");
    fgets(palavra, MAX, stdin);
    
    tamanho = strlen(palavra);    
    
    for(i = 0; i<tamanho; i++){
        palavraASCII[i] = palavra[i];
        palavraASCII[i] += 32;
        printf("%c", palavraASCII[i]);
    }
    

    return 0;
}

