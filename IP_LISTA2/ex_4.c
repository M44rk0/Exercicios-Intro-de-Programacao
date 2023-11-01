#include <stdio.h>

//4) Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
//estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve
//terminar quando for lido um número negativo. 


int main(){

    int inter1, inter2, inter3, inter4, num, i;
    
    printf("digite números: (digite um número negativo para encerrar)");
    while(1){
        scanf("%d", &num);
        if(num < 0){
            break;
        }
        else{
            if(num > 0 && num <= 25){
                inter1++;
            }
            else if(num > 26 && num <= 50){
                inter2++;
            }
            else if(num > 51 && num <= 75){
                inter3++;
            }
            else if(num > 76 && num <=100){
                inter4++;
            }
                
        }
    }
    
    printf("Quantidade de números no intervalo [0-25]: %d\n", inter1);
    printf("Quantidade de números no intervalo [26-50]: %d\n", inter2);
    printf("Quantidade de números no intervalo [51-75]: %d\n", inter3);
    printf("Quantidade de números no intervalo [76-100]: %d\n", inter4);

    return 0;
}