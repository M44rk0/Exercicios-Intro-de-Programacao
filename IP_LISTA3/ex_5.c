#include <stdio.h>

int main(){
    
    //5. Escreva um programa em C que imprima todos os números de 1 até 100 e
    //a soma deles.
    
    int num_ant, soma, i;
    
    for(i=2; i<=100; i++){
        num_ant = i - 1;
        soma = i + num_ant;
        printf("%d + %d = %d\n", num_ant, i, soma);

    }
    return 0;
}
