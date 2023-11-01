#include <stdio.h>

int main(){

    //12. Escreva um programa em C que leia um número que servirá para controlar a quantidade de números pares que serão
    //impressos a partir de 2.

    int num, contador,i;
    contador = 0;
    printf("Digite um numero limite: ");
    scanf("%d", &num);
    
    for(i=2; num > contador ; i++){
        if(i % 2 == 0){
            printf("%d ", i);
            contador++;
        }
    }

    return 0;
}