//Crie um conversor de decimal para binário

#include <stdio.h>

int main()
{
    int decimal, resto, i, j;
    int binario[50];
    int cont = 0;
    
    scanf("%d", &decimal);
    
    for(j = 0; decimal > 0; j++){
        resto = decimal % 2;
        decimal = decimal / 2;
        binario[j] = resto;
        cont++;
    }

    for (j = cont - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    
    return 0;
}
