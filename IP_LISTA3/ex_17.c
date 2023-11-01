#include <stdio.h>

int main(){

    //17. Escreva um programa em C que leia os limites inferior e superior de um intervalo e imprima todos os números naturais
    //no intervalo fechado. Suponha que os dados digitados sejam para um intervalo crescente.

    int lim_sup, lim_inf, i;
    
    printf("digite o limite inferior: ");
    scanf("%d", &lim_inf);
    printf("digite o limite superior: ");
    scanf("%d", &lim_sup);
    
    for (i=lim_inf; i <= lim_sup ; i++){
        printf("%d", i);
    }
    
    return 0;
}