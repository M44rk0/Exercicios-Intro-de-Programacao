#include <stdio.h>

//    9. Escreva um programa em C em que sejam lidas os 
//    dados necessários para imprimir-se a área de um trapézio.


int main(){
    
    float B, b, altura, area;
    scanf("%f", &B);
    scanf("%f", &b);
    scanf("%f", &altura);
    area = B + b / 2 * altura;
    printf("A área é igual a: %.2f", area);
    

    return 0;
}