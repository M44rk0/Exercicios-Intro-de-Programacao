#include <stdio.h>

//    5. Escreva um programa em C em que seja lido um valor decimal 
//    e seja impresso esse valor com reajuste de 10%.


int main(){

    int num, reajuste;
    
    scanf("%d", &num);
    reajuste = ((num / 100) * 10) + num;
    printf("%d", reajuste);

    return 0;
}