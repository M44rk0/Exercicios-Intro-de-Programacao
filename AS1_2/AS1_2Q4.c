#include <stdio.h>

int main()
{
    int n, i, x;
    int contador0 = 0, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;
    int contador5 = 0, contador6 = 0, contador7 = 0, contador8 = 0, contador9 = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    if(n < 9){

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == 0)
            contador0++;
        else if (x == 1)
            contador1++;
        else if (x == 2)
            contador2++;
        else if (x == 3)
            contador3++;
        else if (x == 4)
            contador4++;
        else if (x == 5)
            contador5++;
        else if (x == 6)
            contador6++;
        else if (x == 7)
            contador7++;
        else if (x == 8)
            contador8++;
        else if (x == 9)
            contador9++;
        else
        {
            printf("Número inválido! Insira apenas números de 0 a 9.\n");
            i--; 
        }
    }

    if (contador0 > 0)
        printf("Frequência do número 0 = %d\n", contador0);
    if (contador1 > 0)
        printf("Frequência do número 1 = %d\n", contador1);
    if (contador2 > 0)
        printf("Frequência do número 2 = %d\n", contador2);
    if (contador3 > 0)
        printf("Frequência do número 3 = %d\n", contador3);
    if (contador4 > 0)
        printf("Frequência do número 4 = %d\n", contador4);
    if (contador5 > 0)
        printf("Frequência do número 5 = %d\n", contador5);
    if (contador6 > 0)
        printf("Frequência do número 6 = %d\n", contador6);
    if (contador7 > 0)
        printf("Frequência do número 7 = %d\n", contador7);
    if (contador8 > 0)
        printf("Frequência do número 8 = %d\n", contador8);
    if (contador9 > 0)
        printf("Frequência do número 9 = %d\n", contador9);
        
    }
    else{
        printf("Numero com mais de um algarismo, execute o programa novamente!");
    }

    return 0;
}


