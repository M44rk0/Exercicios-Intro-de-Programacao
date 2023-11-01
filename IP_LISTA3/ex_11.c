#include <stdio.h>

int main(){

    //11. Escreva um programa em C que leia um número que será o limite superior de um intervalo e imprima todos os
    //números ímpares menores do que esse número.
    
    int lim, i;

    printf("Digite um numero para ser o limite superior: ");

    scanf("%d", &lim);

    for (i=0; i<lim; i++){
    if(i % 2 == 1){
        printf("%d", i);
        }
    }
   
    return 0;
}