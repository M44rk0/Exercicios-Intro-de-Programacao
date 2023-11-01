#include <stdio.h>

//    4. Escreva um programa em C em que sejam lidos quatro números 
//    inteiros e imprima a média ponderada deles,
//    sabendo-se que os pesos são, respectivamente: 1, 2, 3 e 4.

int main(){

    int a, b, c, d;
    float resul;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    resul = (a * 1 + b * 2 + c * 3 + d * 4) / 10;
    printf("%.2f", resul);

    return 0;

}