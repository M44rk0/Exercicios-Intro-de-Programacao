//2. Escreva um programa em C que armazene 7 números inteiros em um vetor NUM e imprima uma listagem
//numerada contendo o número e uma das mensagens: PAR ou ÍMPAR. Por exemplo:
// RELAÇÃO DOS NÚMEROS
//1. 114 (PAR)
//2. 7 (ÍMPAR)

#include <stdio.h>
int main(){

int num[100], i, x;

printf("Digite um número: ");

for(i = 0; i<7; i++){
    scanf("%d", &num[i]);
    }
    
    
for(i = 0; i<7; i++){
    if(num[i] % 2 == 0){
        printf("%d (PAR)\n", num[i]);
    }
    else{
        printf("%d (IMPAR)\n", num[i]);
    }
}
    

    return 0;
}
