#include <stdio.h>

int main(){

    //20. Escreva um programa em C que leia um número (n) que indique a quantidade de números a serem lidos. Em seguida,
    //devem ser lidos n números da entrada (negativos e positivos) e impresso o menor e o maior deles.
    
    int n, numAnt, num, i;
    int maior, menor;
    int primeira_entrada = 1;
    
    printf("Quantos números serão lidos? ");
        scanf("%d", &n);
        
    for(i = 1; i <= n; i++){
        printf("Número %d: ", i);
        scanf("%d", &num);
        
        if (primeira_entrada){
            menor = num;
            maior = num;
            primeira_entrada = 0;
        }
        
        else{
        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
      }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d", menor);

    return 0;
}