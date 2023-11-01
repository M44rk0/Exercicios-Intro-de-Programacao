//Marco Antonio Medeiros Nascimento

#include <stdio.h>

int main()
{
    
    int A[5], B[5], I[10], i, j, n, k = 0;
    
    for(i = 0; i < 5; i++){
        printf("Digite os valores de A: ");
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Digite os valores de B: ");
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (A[i] == B[j]){
                n = A[i];
                if(I[k - 1] != n){
                I[k] = A[i];
                k++;
                break;
                }
            }
        }
    }    
    
    printf("Valores do Vetor A: ");
    for(i = 0; i<5; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Valores do Vetor B: ");
    for(i = 0; i<5; i++){
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("Valores do Vetor I: ");
    
    for(i = 0; i<k; i++){
        printf("%d ", I[i]);
        }
}





