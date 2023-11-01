#include <stdio.h>

int main(){

//5) Faça um algoritmo estruturado que leia uma quantidade não determinada de números positivos.
//Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos
//números lidos. O número que encerrará a leitura será zero.

int num,  i;
float lidos, pares, impares, valores_pares, media, mediag, contador;

    printf("digite números: (digite 0 para encerrar)");
    while(1){
    scanf("%d", &num);
    if(num == 0){
        break;
    }
    else{
        if(num % 2 == 0){
            pares++;
            valores_pares += num;
        }
        if(num % 2 == 1){
            impares++;
        }
        lidos += num;
        contador++;
        }
    }
    media = valores_pares / pares;
    mediag = lidos / contador;
    
    printf("Quantidade de números pares: %.2f\n", pares);
    printf("Quantidade de números ímpares: %.2f\n", impares);
    printf("Media dos valores pares: %.2f\n", media);
    printf("Media geral: %.2f\n", mediag);

    return 0;

}