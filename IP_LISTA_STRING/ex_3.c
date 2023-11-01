/******************************************************************************

3. Escreva um programa em C que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII
de cada caractere da palavra. Imprima a string resultante.

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
        palavraASCII[i] += 1;
        printf("%c", palavraASCII[i]);
    }
    

    return 0;
}

