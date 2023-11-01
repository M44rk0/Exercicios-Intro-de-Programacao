#include <stdio.h>

int main(){
    
    //4. Escreva um programa em C que imprima o quadrado dos números de 1 até 20
    
    int quadrado, i;
    
    for(i=1; i<=20; i++){
        quadrado = i * i;
        printf("%d ", quadrado);

    }

    return 0;
}