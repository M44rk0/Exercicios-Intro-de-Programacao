#include <stdio.h>

int main(){

    //3. Escreva um programa em C que imprima os 20 primeiros números ímpares.
    
    int i;
    
    for(i=1; i<=20; i++){
        if(i % 2 == 1){
        printf("%d ", i);
        }
        else{
            continue;
        }
    }
    
    return 0;

}