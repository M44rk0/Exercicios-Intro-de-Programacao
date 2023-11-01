#include <stdio.h>

int main(){

//8) Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma seqüência em
//P.A. contendo 10 valores. 

    int PA, i, n, r;
    
    printf("Digite o valor inicial: ");
    scanf("%d", &n);
    printf("Digite a razão: ");
    scanf("%d", &r);
    
    for(i=1; i<=10; i++){
        PA = n + (i - 1) * r;
        printf("PA = %d\n", PA);
    }

    return 0;
}