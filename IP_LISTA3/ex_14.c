#include <stdio.h>

int main(){

    //14. Escreva um programa em C que imprima a soma dos números pares entre 25 e 200.

    int i, numeros, anterior;

    for(i=25; i<=200;i++){
        if(i % 2 == 0){
            anterior = numeros;
            numeros += i;
            printf("%d + %d = %d\n", i, anterior, numeros);
        }
    }

    printf("%d", numeros);
 
    return 0;
}