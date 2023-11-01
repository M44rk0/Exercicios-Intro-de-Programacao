#include <stdio.h>
#include <math.h>

int main(){

    //7. Escreva um programa em C que entre com quatro números e imprima o 
    //cubo e a raiz cúbica de cada número
    
    int num, cubo, raiz, i;
    
    for (i = 1; i<=4; i++){
        scanf("%d", &num);
        cubo = (pow(num, 3));
        raiz = (pow(num, 1.0 / 3.0));
        printf("o %d ao cubo é: %d\n", num, cubo);
        printf("a raiz de %d é %d\n",  num, raiz);
    }
   
    return 0;
}