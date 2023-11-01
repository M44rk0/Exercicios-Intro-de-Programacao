#include <stdio.h>

int main(){

    //1. Escreva um programa em C que entre com quatro números e imprima e 
    //quadrado de cada número

    int num, quadrado, i;
    
    for (i = 1; i<=4; i++){
        scanf("%d", &num);
        quadrado = num * num;
        printf("%d\n", quadrado);
        
    }

    return 0;

}