/******************************************************************************

Escreva um programa em C para gerenciar um sistema de reservas de mesas em uma casa de espetáculo, com
as seguintes características:
a) A casa possui 30 mesas de 5 lugares cada uma. O programa deverá permitir que o usuário escolha código de
uma mesa (100 a 129) e forneça a quantidade de lugares desejados.
b) O programa deverá informar se foi possível realizar a reserva e atualizar a reserva. Se não for possível, o
programa deverá emitir uma mensagem.
c) O programa deve terminar quando o usuário digitar o código 0 (zero) para uma mesa ou quando todos os 150
lugares estiverem ocupados.

*******************************************************************************/
#include <stdio.h>
#define MAX 30


int main()
{
    int mesas[MAX], i, reserva, totalreservas = 0, lugares;
    
    for(i=0; i < MAX; i++){
        mesas[i] = 5;
    }

    while(totalreservas < 15){
        printf("Digite o código da mesa para reserva:");
        scanf("%d", &reserva);
        if(reserva == 0){
            printf("Reservas encerradas!");
            break;
        }
        
        if(mesas[reserva-100] == 5 || mesas[reserva-100] < 5){
            
            if(mesas[reserva-100] == 0){
                printf("Mesa Indisponivel, selecione outra!\n");
            }
            else{ 
                
            printf("Mesa disponivel com %d lugares\n", mesas[reserva-100]);
            printf("Digite a quantidade de lugares:\n");
            scanf("%d", &lugares);
            totalreservas += lugares;
            
                if(lugares > mesas[reserva-100]){
                    lugares = mesas[reserva-100];
                }
            }

            mesas[reserva-100] = mesas[reserva - 100] - lugares;
            
            }
            
        
    }

    return 0;
}