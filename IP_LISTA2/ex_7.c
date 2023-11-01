#include <stdio.h>

int main(){

//7) Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de
//N. Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.

    int num, i, conta;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    for(i=0; i<=10; i++){
        conta = i * num;
        printf("%d x %d = %d\n", i, num, conta);
    }

    return 0;

}