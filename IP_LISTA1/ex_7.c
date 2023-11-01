#include <stdio.h>

//    7. Escreva um programa em C em que sejam lidas a base e altura 
//    de um retângulo e seja impressa a seguinte saída:
//    a) Perímetro;
//    b) Área;
//    c) Diagonal.


int main(){

     float base, altura, perim, area, diag;
    
    scanf("%f %f", &base, &altura);
    perim = base * 2 + altura * 2;
    area = base * altura;
    diag = base * base + altura * altura;
    diag = sqrt(diag);
    printf("area = %.2f\nperimetro = %.2f\ndiagonal = %.2f\n", area, perim, diag);

    return 0;
}