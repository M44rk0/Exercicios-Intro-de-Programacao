//2) Desenvolver um algoritmo que leia a altura de 15 pessoas. 
//Este programa deverá calcular e mostrar:
//a. A menor altura do grupo;
//b. A maior altura do grupo;

#include <stdio.h>

int main(){

    float altura, maior, menor;
    int i, primeira_entrada = 1;
    
    
    printf("Digite 15 alturas: ");
    for(i=1; i<=15; i++){
        scanf("%f", &altura);
        if(primeira_entrada){
            maior = altura;
            menor = altura;
            primeira_entrada = 0;
        }
        else{
            if(altura < maior){
                maior = altura;
            if(altura > menor){
                menor = altura;
            }
         }
      }
      
    }

    printf("A maior altura é: %.2f\n", maior);
    printf("A menor altura é: %.2f\n", menor);

    return 0;
}