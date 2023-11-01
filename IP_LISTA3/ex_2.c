#include <stdio.h>

int main(){

    //2. Escreva um programa em C que imprima todos os números pares no 
    //intervalo de 1 a 10
    
    int i;
    
    for(i=1; i<=10; i++){
        if(i % 2 == 0){
        printf("%d ", i);
        }
        else{
            continue;
        }
    }

    return 0;

}