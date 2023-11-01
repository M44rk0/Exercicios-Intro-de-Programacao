#include <stdio.h>
//    8. Escreva um programa em C em que seja lido o raio de um círculo impressa a seguinte saída:
//    a) Perímetro;
//    b) Área.

int main(){

    float raio, area, perim;
    scanf("%f", &raio);
    area = 3.14 * (raio * raio);
    perim = 2 * 3.14 * raio;
    printf("area = %.2f\nperimetro = %.2f\n", area, perim);

    return 0;
}