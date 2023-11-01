#include <stdio.h>

//10) Escreva um algoritmo que leia um valor inicial A e imprima a seqüência de valores do cálculo de
//A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120

int main(){
    
    int num, i, fatorial, x;

    printf("Digite um número:");
    scanf("%d", &num);

    for(fatorial = 1; num > 1; num = num - 1){
        fatorial = fatorial * num;

        }
    
    printf("%d", fatorial);

    return 0;
}