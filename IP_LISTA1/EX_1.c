#include <stdio.h>
//1. Escreva um programa em C em que sejam lidos dois valores, 
//atribuídos as variáveis A e B, imprima-as, troque entre si
//os valores e imprima-as novamente

int main(){

    int A, B, aux;
    scanf("%d", &A);
    scanf("%d", &B);
    printf("A:%d  e B:%d\n", A, B);
    aux = A;
    A = B;
    B = aux;
    printf("A:%d  e B:%d\n", A, B);
    

return 0;

}