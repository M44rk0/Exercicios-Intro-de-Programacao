/******************************************************************************

O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de
substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo
dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído
por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Escreva um programa em C que faça uso desse
Código de César (3 posições), entre com uma string e retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

int main()
{
    int i, j, tamanho, tamanhostring;
    char stringlida[MAX];
    char alfabeto[27] = {"abcdefghijklmnopqrstuvxwyz"};
    
    printf("Digite uma frase para codificar: ");
    fgets(stringlida, MAX, stdin);
    
    tamanhostring = strlen(stringlida) - 1;
    tamanho = strlen(alfabeto);
    
    for(i = 0; i<tamanhostring; i++){
        for(j = 0; j<tamanho; j++){
            if(tolower(stringlida[i]) == alfabeto[j]){
                if(stringlida[i] == 'w'){
                    stringlida[i] = 'A';
                }
                else if(stringlida[i] == 'y'){
                    stringlida[i] = 'B';
                }
                else if(stringlida[i] == 'z'){
                    stringlida[i] = 'C';
                }
                else{
                stringlida[i] = toupper(alfabeto[j+3]);
                break;
                }
            }
        }
    }

    printf("%s", stringlida);

    return 0;
}

