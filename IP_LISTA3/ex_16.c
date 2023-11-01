#include <stdio.h>

int main(){

    //16. Escreva um programa em C que leia um número (num) que servirá para controlar os primeiros números ímpares. Além
    //de imprimir os números ímpares, deve ser impressa a soma deles. Suponha num será maior que zero.

    int num, contador, i, soma;
    contador = 0;
    printf("Digite um numero limite: ");
    scanf("%d", &num);
    
    for(i=0; num > contador ; i++){
        if(i % 2 == 1){
            printf("%d ", i);
            soma += i;
            contador++;
        }
    }

    printf("%d", soma);
    
    return 0;
}