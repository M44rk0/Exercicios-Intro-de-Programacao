#include <stdio.h>

int main(){

    //10. Escreva um programa em C que leia um número que será o limite superior de um intervalo e o incremento. Imprimir
    //todos os números naturais no intervalo de 0 até esse número. Suponha que os dois número lidos são maiores do que zero.

    int lim_sup, i;
    scanf("%d", &lim_sup);
    
    for (i = 0; i <= lim_sup; i++){
        printf("%d\n", i);
    }
    
    return 0;
}