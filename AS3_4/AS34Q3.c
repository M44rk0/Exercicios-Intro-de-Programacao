//Marco Antonio Medeiros Nascimento

#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 1000

int main() {
    char texto[TAMANHO_MAX];
    char remover[TAMANHO_MAX];
    int i, j;
    int pos = 0;

    printf("Digite o texto:\n");
    fgets(texto, TAMANHO_MAX, stdin);

    printf("Digite os caracteres para remover:\n");
    fgets(remover, TAMANHO_MAX, stdin);

    int tamanhoTexto = strlen(texto);
    int tamanhoRemover = strlen(remover);

    for (i = 0; i < tamanhoTexto; i++) {
        int encontrado = 0;

        for (j = 0; j < tamanhoRemover; j++) {
            if (texto[i] == remover[j]) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado == 0) {
            texto[pos++] = texto[i];
        }
    }

    texto[pos] = '\0';

    printf("%s", texto);

    return 0;
}



