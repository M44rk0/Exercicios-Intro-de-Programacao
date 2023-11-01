/******************************************************************************

Escreva um programa em C que calcula o comprimento de uma string (não use a função strlen).

*******************************************************************************/
#include <stdio.h>
#define MAX 1000

int main()
{
    int i, tamanho = 0;
    char texto[MAX];
    
    printf("Digite um texto para ser lido: ");
    fgets(texto, MAX, stdin);
    
    for(i = 0; i<MAX; i++){
        if(texto[i] == '\0'){
            tamanho--;
            break;
        }
        else{
            printf("%c", texto[i]);
            tamanho++;
        }
    }

    printf("%d", tamanho);
    
    return 0;
}

