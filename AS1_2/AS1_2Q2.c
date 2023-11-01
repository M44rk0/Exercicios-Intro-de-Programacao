#include <stdio.h>

int main(){
    float soma, numerador;
    int N;
    soma = 0;

    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    int denominador = N;

    
    for (numerador = 1; numerador <= N; numerador++) {
        soma += numerador / denominador;
        denominador--;
    }

    printf("O resultado da soma é: %.1f\n", soma);
    
    
    return 0;
}

    

