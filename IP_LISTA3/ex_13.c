#include <stdio.h>

int main(){

    //13. Escreva um programa em C que leia um número e imprima todos os 
    //números de 1 até o número lido e produto deles
    
    int num, i, conta;
    printf("Digite um número: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        conta = num * i;
        printf("%d x %d = %d\n", num, i, conta);
    }

    return 0;
}