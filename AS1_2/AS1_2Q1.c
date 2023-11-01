#include <stdio.h>

int main()
{
    int idade, maior, menor, primeira_entrada;
    float idades, media;
    int maior_de_idade, contador;
    
    primeira_entrada = 1;
    idades = 0;
    maior_de_idade = 0;
    contador = 0;
    
    
    printf("Digite uma idade (para parar digite 0): ");
    while (1)
    {
        scanf("%d", &idade);

        if (idade == 0)
            break;

        idades += idade;
        contador++;

        if (primeira_entrada)
        {
            menor = idade;
            maior = idade;
            primeira_entrada = 0;
        }
        else
        {
            if (idade < menor)
                menor = idade;

            if (idade > maior)
                maior = idade;
        }

        if (idade >= 18)
            maior_de_idade++;
    }

    media = idades / contador;

    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);
    printf("Maiores de idade: %d\n", maior_de_idade);
    printf("A média das idades é igual a: %.2f\n", media);

    return 0;
}


