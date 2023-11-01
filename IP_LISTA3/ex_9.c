#include <stdio.h>

int main(){

    //9.  Escreva um programa em C que imprima a tabela de conversão de graus Celsius-Fahrenheit para o intervalo desejado
    //pelo usuário. O algoritmo deve solicitar ao usuário o limite superior, o limite inferior do intervalo e o decremento. Fórmula
    //de conversão: C=5(F-32)/9.
    
    float lim_sup, lim_inf, i, cf;
    scanf("%f %f", &lim_inf, &lim_sup);
   
    for(i = lim_inf; i <= lim_sup; i++){
       cf = 5 * (i - 32) /9;
       printf("%.2f em Fahrenheit é igual a %.2f C \n", i, cf);
    }

    return 0;
}