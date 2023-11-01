/******************************************************************************
Escreva um programa em C que receba a temperatura média de cada mês do ano, em centígrados, e armazene
essas temperaturas em um vetor; imprimir as temperaturas de todos os meses, a maior e a menor temperatura do
ano e em que mês acontecem.

*******************************************************************************/
#include <stdio.h>

int main(){

    int temperaturas[100], i, media, maior = 0, menor = 0, mesesMaior, mesesMenor;
    char meses[12][20] = {"janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    for( i = 0; i<=12; i++){
        scanf("%d", &temperaturas[i]);
    }

    for(i = 0; i<=12; i++){
        
        if(temperaturas[i] > temperaturas[maior]){
            mesesMaior = i;
            maior = i;
        }
        if(temperaturas[i] < temperaturas[menor]){
            mesesMenor = i;
            menor = i;
        }
    }
        
        for(i = 0; i<=12; i++){
            printf("%d\n", temperaturas[i]);
        }
        printf("\n");
        printf("A maior temperatura foi %d C em %s\n", temperaturas[maior], meses[mesesMaior]);
        printf("A menor temperatura foi %d C em %s\n", temperaturas[menor], meses[mesesMenor]);
    
    return 0;

    }
    


