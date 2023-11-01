#include <stdio.h>

//1) Desenvolver um algoritmo que efetue a soma de todos os números 
//ímpares que são múltiplos de
//três e que se encontram no conjunto dos números de 1 até 500.

int main(){
    int num, i, conta;

    for(i=1 ; i<500; i++){
        if(i % 3 == 0 && i % 2 == 1){
        printf("%d\n", i);
        conta += i;

        }
    }
        printf("%d", conta);

        return 0;
}