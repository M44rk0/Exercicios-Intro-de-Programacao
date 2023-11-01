#include <stdio.h>

//2. Escreva um programa em C em que seja lido um valor decimal, 
//imprima-o, separe a parte decimal da parte inteiras e
//as imprima separadamente.

int main(){

    float num, sub;
    int num2;
    
    scanf("%f", &num);
    num2 = num;
    sub = num - num2;
    printf("%d\n", num2);
    printf("%.2f\n", sub);
    

    return 0;
}