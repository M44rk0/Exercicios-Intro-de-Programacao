/******************************************************************************

2. Escreva um programa em C que compara duas strings (não use a função strcmp ou stricmp).

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(){
    
    int i, j,tamanho1, tamanho2;
    char string1[MAX];
    char string2[MAX];
    
    printf("Digite uma String: ");
    fgets(string1, MAX, stdin);
    
    printf("Digite outra String: ");
    fgets(string2, MAX, stdin);
    
    tamanho1 = strlen(string1);
    tamanho2 = strlen(string2);
    
    if(tamanho1 != tamanho2){
        printf("Não são enguais!");
    }
    else if(tamanho1 == tamanho2){
        for(i = 0; i<tamanho1; i++){
                if(string1[i] == string2[i]){
                    printf("São enguais!");
                    break;
                }
                else{
                    printf("Não são enguais!");
                    break;
                }
            }
        }
    
    return 0;
}
