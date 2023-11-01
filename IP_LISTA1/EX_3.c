#include <stdio.h>

//    3. Escreva um programa em C em que seja lido um valor decimal, 
//    imprima-o, separe a parte decimal da parte inteiras e
//    as imprima separadamente.

int main(){

    int num, unidade, dezena, centena;
    scanf("%d", &num);
    centena = (num / 100) * 100;
    dezena = ((num - centena) / 10) * 10; 
    unidade = num - centena - dezena;
    printf("%d\n", centena);
    printf("%d\n", dezena);
    printf("%d\n", unidade);

    return 0;
}