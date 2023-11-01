#include <stdio.h>

//3) Desenvolver um algoritmo que leia um número não determinado de valores e calcule e escreva a
//média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores
//negativos e o percentual de valores negativos e positivos.

int main(){

    int num, i, contador, soma;
    float media, contadorp, contadorn, percentualn, percentualp;
    
    printf("Digite um número (digite 0 para encerrar): "); 
    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        else{
            soma += num;
            contador ++;
            
            if(num > 0){
                contadorp++;
            }
            if(num < 0){
                contadorn++;
            }
        }
        media = soma / contador; 
        percentualn = contadorn / contador * 100 ;
        percentualp = contadorp / contador * 100 ;
    }
    
    printf("Média do valores: %.2f\n", media);
    printf("Quantidade de valores positivos: %.1f\n", contadorp);
    printf("Quantida de valores negativos: %.1f\n", contadorn);
    printf("Percentual negativo: %.2f\n", percentualn);
    printf("Percentual positivo: %.2f\n", percentualp);

    return 0;
}