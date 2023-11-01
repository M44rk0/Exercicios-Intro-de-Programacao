#include <stdio.h>

int main(){

    //8. Escreva um programa em C que calcule e imprima o valor de b elevado a n. 
    //O valor de n deverá ser maior do que 1 e
    //inteiro, e o valor de b maior ou igual a 2 e inteiro.
    
    int b, n, elevado;
    
    while(b < 2){
        printf("Escreva um numero inteiro maior ou igual a 2: ");
        scanf("%d", &b);
    }
    while(n < 1){
        printf("Escreva um numero inteiro maior que 1: ");
        scanf("%d", &n);
    }
    
    elevado = (pow(b, n));
    printf("%d", elevado); 

    return 0;
}