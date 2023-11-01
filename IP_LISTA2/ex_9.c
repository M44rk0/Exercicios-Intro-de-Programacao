#include <stdio.h>
#include <math.h>

int main(){

//9) Escreva um algoritmo que leia um valor inicial A e uma razão R e imprima uma seqüência em
//P.G. contendo 10 valores.

    int pg, i, n, r;
    
    printf("Digite o valor inicial: ");
    scanf("%d", &n);
    printf("Digite a razão: ");
    scanf("%d", &r);
    
    for(i=1; i<=10; i++){
        pg = n * pow(r, i-1);
        printf("PA = %d\n", pg);
    }    

    return 0;
}