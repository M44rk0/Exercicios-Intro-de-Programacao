#include <stdio.h>

int main()
{
    int i, A, B, tempo;
    
    A = 10;
    B = 0;
    tempo = 0;
    
    for (i = 0; B <= A ; i++){
        A += 1;
        B += 2;
        tempo++;
        printf("o corredor A está a %d metros na frente\n", A);
        printf("o corredor B está a %d metros na frente\n", B);
        printf("tempo: %d minutos \n", tempo);
    }
    
    printf("O corredor B leva %d minutos para ultrapassar o corredor A", tempo);

    return 0;
}
