#include <stdio.h>
//    6. Escreva um programa em C em que seja lido o preço de 
//    uma mercadoria e seja impresso seu valor com desconto de 5%

int main(){

    float num, desconto;
    
    scanf("%f", &num);
    desconto = (num - (num / 100) * 5);
    printf("%.2f", desconto);

    return 0;

}