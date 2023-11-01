#include <stdio.h>

int main(){

    //18. Escreva um programa em C que leia um número (n) que indique a quantidade de números a serem lidos. Em seguida,
    //devem ser lidos n números da entrada e e impresso o triplo de cada um deles.
    
    int n, num, i, triplo;

    
    printf("Quantos números serão lidos? ");
        scanf("%d", &n);
        
    for(i = 1; i <= n; i++){
        scanf("%d", &num);
        triplo = num * num * num;
        printf("o triplo de %d é = %d\n", num, triplo);
    }

    return 0;
}