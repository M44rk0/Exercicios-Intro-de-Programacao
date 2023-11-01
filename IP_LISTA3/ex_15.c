#include <stdio.h>

int main(){

    //15. Escreva um programa em C que leia um número (num) e imprima a soma dos números múltiplos de 5 no intervalo
    //aberto entre 1 e num. Suponha que num será maior do que zero.
    
    int num, i, conta;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num < 5){
        printf("Nenhum multiplo de 5 encontrado no intervalo dado!");
    }
    else{
    for(i=1 ; i<num; i++){
        if(i % 5 == 0){
        printf("%d\n", i);
        conta += i;

        }
    }
        printf("%d", conta);
    }
    return 0;
}