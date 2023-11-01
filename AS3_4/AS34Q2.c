//Marco Antonio Medeiros Nascimento

#include <stdio.h>

int main() {
    int A[5], B[5], D[10], i, j, iguais, existe = 0, k = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite os valores de A: ");
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Digite os valores de B: ");
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        iguais = 0;

        for (j = 0; j < 5; j++) {
            if (A[i] == B[j]) {
                iguais = 1;
                break;
            }
        }

        if (iguais == 0) {
            for (j = 0; j < k; j++) {
                if (A[i] == D[j]) {
                    existe = 1;
                    break;
                }
            }

            if (existe == 0) {
                D[k] = A[i];
                k++;
            }
        }
    }

    printf("Valores do Vetor A: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Valores do Vetor B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("Valores do Vetor D: ");

    for (i = 0; i < k; i++) {
        printf("%d ", D[i]);
    }

    return 0;
}




