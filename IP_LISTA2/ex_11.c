
//11. Escreva um programa em C que leia um número inteiro de 4 algarismos e imprima se é ou não é múltiplo de 4 o número
//formado pelos algarismos que estão nas casas das unidades de milhar e das centenas.

#include <stdio.h>

int main()
{
    int num, divisao, soma;
    float milhar, centena, milhar2;
    
    scanf("%d", &num);
    milhar = num / 1000;
    milhar2 = num / 1000 * 1000;
    centena = ((num / 100) * 100 - milhar2)/100;
    printf("Milhar = %f centena = %f", milhar, centena);
    soma = milhar + centena;
    
    if(soma % 4 == 0){
        printf("%d é divisivel por 4", num);
    }
    else{
        printf("%d não é divisivel por 4", num);
    }
    
    return 0;
}
