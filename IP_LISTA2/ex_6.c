#include <stdio.h>

int main(){

    //6) Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200

    int i;
    for(i=100; i<=200; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
        }
    }

    return 0;
}