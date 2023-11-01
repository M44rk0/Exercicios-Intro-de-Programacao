#include <stdio.h>

int main(){
    //6. Escreva um programa em C que entre com 10 números e imprima a metade 
    //de cada número
    
    
    float num, metade, i;
    
    for (i = 1; i<=10; i++){
        scanf("%f", &num);
        metade = num / 2;
        printf("a metade de %.2f é %.1f\n", num, metade);
        
    }
    
    return 0;
}
